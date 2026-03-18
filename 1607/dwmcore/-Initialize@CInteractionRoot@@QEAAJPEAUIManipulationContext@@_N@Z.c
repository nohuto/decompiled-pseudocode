/*
 * XREFs of ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x18000866C
 * Callers:
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z @ 0x180007B24 (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z @ 0x1800A5074 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800A5590 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTouchInteractionConfigurationPrimitive@@I@Z @ 0x1800A5944 (-AddMultipleAndSet@-$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmTou.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionRoot::Initialize(CInteractionRoot *this, struct IManipulationContext *a2, char a3)
{
  CInteractionContextWrapper *v5; // rax
  struct IInteractionContextWrapper *v6; // rbx
  CInteractionContextWrapper *v7; // rax
  int v8; // ebx
  __int64 v9; // r8
  int v11; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+34h] [rbp-44h]
  int v13; // [rsp+38h] [rbp-40h]

  *((_QWORD *)this + 121) = a2;
  v5 = (CInteractionContextWrapper *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 16LL))(
                                       WPF::g_pProcessHeap,
                                       576LL);
  if ( v5 )
    v6 = CInteractionContextWrapper::CInteractionContextWrapper(v5);
  else
    v6 = 0LL;
  if ( !v6 )
    return (unsigned int)-2147024882;
  v7 = (CInteractionContextWrapper *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                                + 16LL))(
                                       WPF::g_pProcessHeap,
                                       576LL);
  if ( v7 )
    v7 = CInteractionContextWrapper::CInteractionContextWrapper(v7);
  if ( v7 )
  {
    v8 = CInteractionProcessor::Initialize((CInteractionRoot *)((char *)this + 32), v6, v7);
    if ( v8 >= 0 )
    {
      *((_DWORD *)this + 36) = 0;
      v11 = 1;
      v12 = -1;
      v13 = -1;
      DynArrayImpl<0>::ShrinkToSize((char *)this + 120, 12LL);
      v8 = DynArray<DwmTouchInteractionConfigurationPrimitive,0>::AddMultipleAndSet((char *)this + 120, &v11, 1LL);
      if ( v8 < 0 )
      {
        *((_DWORD *)this + 36) = 0;
        DynArrayImpl<0>::ShrinkToSize((char *)this + 120, 12LL);
      }
      else
      {
        *((_BYTE *)this + 176) |= 1u;
      }
      if ( v8 >= 0 )
      {
        v11 = 1;
        *((_DWORD *)this + 74) = 0;
        v12 = -1;
        v13 = -1;
        DynArrayImpl<0>::ShrinkToSize((char *)this + 272, 12LL);
        v8 = DynArray<DwmTouchInteractionConfigurationPrimitive,0>::AddMultipleAndSet((char *)this + 272, &v11, 1LL);
        if ( v8 < 0 )
        {
          *((_DWORD *)this + 74) = 0;
          DynArrayImpl<0>::ShrinkToSize((char *)this + 272, 12LL);
        }
        else
        {
          *((_BYTE *)this + 328) |= 1u;
        }
        if ( v8 >= 0 )
        {
          v8 = 0;
          *((_DWORD *)this + 85) = -1;
          *((_DWORD *)this + 84) = -1;
          if ( a3 )
          {
            LOBYTE(v9) = a3;
            (*(void (__fastcall **)(CInteractionRoot *, _QWORD, __int64, __int64))(*(_QWORD *)this + 40LL))(
              this,
              0LL,
              v9,
              1LL);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
