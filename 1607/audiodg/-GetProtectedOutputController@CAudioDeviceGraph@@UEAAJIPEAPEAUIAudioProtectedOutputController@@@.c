/*
 * XREFs of ?GetProtectedOutputController@CAudioDeviceGraph@@UEAAJIPEAPEAUIAudioProtectedOutputController@@@Z @ 0x14002FB50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Create@CProtectedOutputController@@SAJPEAVCAudioDeviceGraph@@PEAPEAV1@@Z @ 0x14002E910 (-Create@CProtectedOutputController@@SAJPEAVCAudioDeviceGraph@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetProtectedOutputController(
        CAudioDeviceGraph *this,
        unsigned int a2,
        struct IAudioProtectedOutputController **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  int v7; // ebx
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  if ( a3 )
  {
    *a3 = 0LL;
    if ( *((_DWORD *)this + 54) )
    {
      if ( a2 != 4 || *((_DWORD *)this + 70) )
      {
        v12 = 0LL;
        v9 = *(_QWORD *)(*((_QWORD *)this + 15) + 24LL);
        if ( !v9 )
          ATL::AtlThrowImpl(-2147467259);
        v10 = **(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(v9 + 16) + 32LL);
        v7 = (**v10)(v10, &GUID_69a95a38_c637_46a0_9fb2_1c939aebf2e8, &v12);
        if ( v7 >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IAudioProtectedOutputController **))(*(_QWORD *)v12 + 24LL))(
                 v12,
                 a2,
                 a3);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      else
      {
        v8 = (_QWORD *)((char *)this + 80);
        if ( *((_QWORD *)this + 10)
          || (v7 = CProtectedOutputController::Create(
                     (CAudioDeviceGraph *)((char *)this - 8),
                     (struct CProtectedOutputController **)this + 10),
              v7 >= 0) )
        {
          v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct IAudioProtectedOutputController **))*v8)(
                 *v8,
                 &GUID_6ec153c1_371e_47e1_a896_2f7f80eb7842,
                 a3);
        }
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
