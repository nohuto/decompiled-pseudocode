/*
 * XREFs of ?GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x140032840
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Create@CProtectedOutputController@@SAJPEAVCAudioDeviceGraph@@PEAPEAV1@@Z @ 0x140030D00 (-Create@CProtectedOutputController@@SAJPEAVCAudioDeviceGraph@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetProtectedOutputController(
        CAudioDeviceGraph *this,
        unsigned int a2,
        struct IAudioProtectedOutputController **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  int v7; // esi
  __int64 v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  if ( a3 )
  {
    *a3 = 0LL;
    if ( *((_DWORD *)this + 54) )
    {
      if ( a2 != 4 || *((_DWORD *)this + 70) )
      {
        v10 = 0LL;
        v8 = *(_QWORD *)(*((_QWORD *)this + 15) + 24LL);
        if ( !v8 )
          ATL::AtlThrowImpl(-2147467259);
        v7 = (****(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(v8 + 16) + 32LL))(
               **(_QWORD **)(*(_QWORD *)(v8 + 16) + 32LL),
               &GUID_69a95a38_c637_46a0_9fb2_1c939aebf2e8,
               &v10);
        if ( v7 >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioProtectedOutputController **))(*(_QWORD *)v10 + 24LL))(
                 v10,
                 a2,
                 a3);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
      else if ( *((_QWORD *)this + 10)
             || (v7 = CProtectedOutputController::Create(
                        (CAudioDeviceGraph *)((char *)this - 8),
                        (struct CProtectedOutputController **)this + 10),
                 v7 >= 0) )
      {
        v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IAudioProtectedOutputController **))this + 10))(
               *((_QWORD *)this + 10),
               &GUID_6ec153c1_371e_47e1_a896_2f7f80eb7842,
               a3);
      }
    }
    else
    {
      v7 = -2005139437;
    }
  }
  else
  {
    v7 = -2147467261;
  }
  LeaveCriticalSection(v3);
  return (unsigned int)v7;
}
