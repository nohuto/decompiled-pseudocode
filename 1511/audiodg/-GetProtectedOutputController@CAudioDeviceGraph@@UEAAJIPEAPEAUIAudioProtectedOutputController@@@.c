/*
 * XREFs of ?GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140006BE0
 * Callers:
 *     ?GetProtectedOutputController@CSystemAudioDeviceSharedBase@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140005D80 (-GetProtectedOutputController@CSystemAudioDeviceSharedBase@@UEAAJIPEAPEAUIAudioProtectedOutputCo.c)
 * Callees:
 *     ?QueryInterface@CProtectedOutputController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140016C10 (-QueryInterface@CProtectedOutputController@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Create@CProtectedOutputController@@SAJPEAVCAudioDeviceGraph@@PEAPEAV1@@Z @ 0x140017418 (-Create@CProtectedOutputController@@SAJPEAVCAudioDeviceGraph@@PEAPEAV1@@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetProtectedOutputController(
        CAudioDeviceGraph *this,
        unsigned int a2,
        struct IAudioProtectedOutputController **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  char *v7; // rdi
  int v8; // esi
  CProtectedOutputController *v9; // rbx
  __int64 (__fastcall *v10)(CProtectedOutputController *__hidden, const struct _GUID *, void **); // rdi
  int Interface; // eax
  __int64 v13; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  if ( a3 )
  {
    *a3 = 0LL;
    if ( *((_DWORD *)this + 54) )
    {
      if ( a2 != 4 || *((_DWORD *)this + 70) )
      {
        v14 = 0LL;
        v13 = *(_QWORD *)(*((_QWORD *)this + 15) + 24LL);
        if ( !v13 )
          ATL::AtlThrowImpl(-2147467259);
        v8 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(v13 + 16) + 32LL))(
               **(_QWORD **)(*(_QWORD *)(v13 + 16) + 32LL),
               &GUID_69a95a38_c637_46a0_9fb2_1c939aebf2e8,
               &v14);
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioProtectedOutputController **))(*(_QWORD *)v14 + 24LL))(
                 v14,
                 a2,
                 a3);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
      else
      {
        v7 = (char *)this + 80;
        if ( *((_QWORD *)this + 10)
          || (v8 = CProtectedOutputController::Create(
                     (CAudioDeviceGraph *)((char *)this - 8),
                     (struct CProtectedOutputController **)this + 10),
              v8 >= 0) )
        {
          v9 = *(CProtectedOutputController **)v7;
          v10 = ***(__int64 (__fastcall ****)(CProtectedOutputController *__hidden, const struct _GUID *, void **))v7;
          if ( v10 == CProtectedOutputController::QueryInterface )
            Interface = CProtectedOutputController::QueryInterface(
                          v9,
                          &GUID_6ec153c1_371e_47e1_a896_2f7f80eb7842,
                          (void **)a3);
          else
            Interface = v10(v9, &GUID_6ec153c1_371e_47e1_a896_2f7f80eb7842, (void **)a3);
          v8 = Interface;
        }
      }
    }
    else
    {
      v8 = -2005139437;
    }
  }
  else
  {
    v8 = -2147467261;
  }
  LeaveCriticalSection(v3);
  return (unsigned int)v8;
}
