/*
 * XREFs of ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1C023A968
 * Callers:
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C023E93C (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C021F6CC (_TlgCreateSz.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C023E1FC (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 */

__int64 __fastcall InteractiveControlManager::ClearBackgroundAccessors(InteractiveControlManager *this)
{
  LPCGUID v2; // r8
  LPCGUID v3; // r9
  InteractiveControlDevice **v4; // rbx
  __int64 v5; // rsi
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  unsigned int v9; // [rsp+38h] [rbp-9h] BYREF
  int v10; // [rsp+3Ch] [rbp-5h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+27h] BYREF
  unsigned int *v13; // [rsp+78h] [rbp+37h]
  int v14; // [rsp+80h] [rbp+3Fh]
  int v15; // [rsp+84h] [rbp+43h]

  v9 = 0;
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::ClearBackgroundAccessors entry");
    v10 = 0;
    v15 = 0;
    v13 = (unsigned int *)&v10;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF4C0, v2, v3, 4u, &pData);
  }
  v4 = (InteractiveControlDevice **)((char *)this + 40);
  v5 = 5LL;
  do
  {
    if ( *v4 )
      InteractiveControlDevice::SetBackgroundAccessor(*v4, 0LL, 0);
    ++v4;
    --v5;
  }
  while ( v5 );
  *((_DWORD *)this + 6) = 0;
  HMAssignmentLock((char *)this + 16, 0LL);
  if ( (unsigned int)hProvider > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::ClearBackgroundAccessors exit");
    v15 = 0;
    v13 = &v9;
    v14 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EF3B0, v6, v7, 4u, &pData);
  }
  return v9;
}
