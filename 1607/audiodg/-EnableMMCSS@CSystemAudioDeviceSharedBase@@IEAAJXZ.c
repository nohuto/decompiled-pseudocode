/*
 * XREFs of ?EnableMMCSS@CSystemAudioDeviceSharedBase@@IEAAJXZ @ 0x14002A8E8
 * Callers:
 *     ?GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z @ 0x14002AF00 (-GetPositionForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     ?SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z @ 0x1400336EC (-SetEngineThreadPriority@@YAJW4AudioThreadPriorityLevel@@PEAPEAX@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::EnableMMCSS(CSystemAudioDeviceSharedBase *this)
{
  int v1; // ebx
  DWORD v3; // eax
  DWORD v4; // eax
  DWORD v5; // ecx
  __int64 v6; // rcx
  LPVOID lpTlsValue; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 83) == -1 )
  {
    v3 = TlsAlloc();
    *((_DWORD *)this + 83) = v3;
    if ( v3 == -1 || (v4 = FlsAlloc(OnThreadDetach), *((_DWORD *)this + 84) = v4, v4 == -1) )
      v1 = -2147024882;
    else
      FlsSetValue(v4, (PVOID)*((unsigned int *)this + 83));
  }
  v5 = *((_DWORD *)this + 83);
  if ( v5 != -1 && *((_DWORD *)this + 84) != -1 )
  {
    lpTlsValue = TlsGetValue(v5);
    if ( !lpTlsValue )
    {
      v1 = SetEngineThreadPriority(v6, &lpTlsValue);
      if ( v1 >= 0 )
        TlsSetValue(*((_DWORD *)this + 83), lpTlsValue);
    }
  }
  return (unsigned int)v1;
}
