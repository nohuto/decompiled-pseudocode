/*
 * XREFs of ?CreateInstance@ConstantInput@Animations@Components@@SAJPEAPEAV123@@Z @ 0x1800AB890
 * Callers:
 *     ?ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z @ 0x180086070 (-ApiSetFloat@Animation@Animations@Components@@QEAAJHM@Z.c)
 *     ?Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z @ 0x1800AB51C (-Create@Sequence@Animations@Components@@SAJPEAPEAV123@@Z.c)
 *     ?ApiSetColor@Animation@Animations@Components@@QEAAJHVColor@23@@Z @ 0x1801919D0 (-ApiSetColor@Animation@Animations@Components@@QEAAJHVColor@23@@Z.c)
 *     ?ApiSetQuaternion@Animation@Animations@Components@@QEAAJHUQuaternion@23@@Z @ 0x180191B4C (-ApiSetQuaternion@Animation@Animations@Components@@QEAAJHUQuaternion@23@@Z.c)
 *     ?ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z @ 0x180191C28 (-ApiSetVector2@Animation@Animations@Components@@QEAAJHVVector2@23@@Z.c)
 *     ?ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z @ 0x180191CE0 (-ApiSetVector3@Animation@Animations@Components@@QEAAJHVVector3@23@@Z.c)
 *     ?ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z @ 0x180191DB4 (-ApiSetVector4@Animation@Animations@Components@@QEAAJHVVector4@23@@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180061650 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::ConstantInput::CreateInstance(
        struct Components::Animations::ConstantInput **a1)
{
  void *(__fastcall *v2)(WPF::ProcessHeapImpl *, size_t); // rax
  _DWORD *v3; // rax
  _DWORD *v4; // rdx
  __int64 result; // rax

  v2 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v2 == WPF::ProcessHeapImpl::AllocClear )
    v3 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x30uLL);
  else
    v3 = (_DWORD *)v2(WPF::g_pProcessHeap, 48LL);
  v4 = v3;
  result = 0LL;
  if ( v4 )
  {
    v4[2] = 1;
    *(_QWORD *)v4 = &Components::Animations::ConstantInput::`vftable';
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    return 2147942414LL;
  *a1 = (struct Components::Animations::ConstantInput *)v4;
  return result;
}
