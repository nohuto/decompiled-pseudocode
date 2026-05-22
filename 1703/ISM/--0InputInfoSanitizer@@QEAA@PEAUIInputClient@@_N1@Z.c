/*
 * XREFs of ??0InputInfoSanitizer@@QEAA@PEAUIInputClient@@_N1@Z @ 0x18007E364
 * Callers:
 *     ?OnInputReport@PTPDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800737D0 (-OnInputReport@PTPDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z @ 0x180073FC0 (-OnInputReport@TouchDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x180074630 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
InputInfoSanitizer *__fastcall InputInfoSanitizer::InputInfoSanitizer(
        InputInfoSanitizer *this,
        struct IInputClient *a2,
        char a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  _DWORD *v7; // rcx
  __int64 v8; // rdx

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &InputInfoSanitizer::`vftable';
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputClient *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_BYTE *)this + 24) = 0;
  *((_BYTE *)this + 25) = a3;
  *((_QWORD *)this + 6) = -1LL;
  v5 = operator new[](0x218uLL);
  v6 = v5;
  if ( v5 )
  {
    v5[132] = -1;
    memset(v5 + 2, 0, 0x208uLL);
    v7 = v6 + 2;
    v8 = 10LL;
    do
    {
      *v7 = v6[132];
      v7 += 13;
      --v8;
    }
    while ( v8 );
    v6[133] = 0;
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 4) = v6;
  *(_QWORD *)v6 = *((_QWORD *)this + 6);
  *((_DWORD *)this + 10) = 1;
  *((_DWORD *)this + 11) = 0;
  return this;
}
