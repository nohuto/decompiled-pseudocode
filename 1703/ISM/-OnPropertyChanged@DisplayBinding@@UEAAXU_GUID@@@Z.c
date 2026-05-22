/*
 * XREFs of ?OnPropertyChanged@DisplayBinding@@UEAAXU_GUID@@@Z @ 0x18001C610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DisplayBinding::OnPropertyChanged(DisplayBinding *this, struct _GUID *a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // eax

  if ( *(_OWORD *)a2 != *(_OWORD *)&DISPLAYBINDING_MONITORS
    && *(_QWORD *)&a2->Data1 == *(_QWORD *)&DISPLAYBINDING_ORIENTATION.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)DISPLAYBINDING_ORIENTATION.Data4 )
  {
    v3 = (__int64 *)*((_QWORD *)this + 13);
    if ( v3 )
    {
      v4 = *v3;
      v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 48LL))((char *)this - 8);
      (*(void (__fastcall **)(__int64 *, unsigned __int64, _QWORD))(v4 + 24))(
        v3,
        ((unsigned __int64)this - 8) & -(__int64)(this != (DisplayBinding *)16),
        v5);
    }
  }
}
