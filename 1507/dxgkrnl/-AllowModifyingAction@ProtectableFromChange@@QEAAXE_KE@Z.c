/*
 * XREFs of ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1C0097488
 * Callers:
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 */

void __fastcall ProtectableFromChange::AllowModifyingAction(
        ProtectableFromChange *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int8 v5; // di
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  v5 = a2;
  if ( (unsigned __int8)a2 >= *((_BYTE *)this + 20) && (_BYTE)a2 != 0xFF )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  LOBYTE(a2) = v5;
  (*(void (__fastcall **)(ProtectableFromChange *, __int64, __int64, __int64, char))(*(_QWORD *)this + 16LL))(
    this,
    a2,
    1LL,
    a3,
    -1);
  if ( v5 == 0xFF )
  {
    if ( a3 != 255 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      WdLogEvent5_WdAssertion(v13);
    }
    *((_WORD *)this + 11) |= (2 << *((_BYTE *)this + 20)) - 1;
    memset(*((void **)this + 6), 0, *((_QWORD *)this + 5));
  }
  else
  {
    v11 = *((unsigned __int16 *)this + 11);
    LODWORD(v11) = v11 | (1 << v5);
    *((_WORD *)this + 11) = v11;
    if ( (unsigned __int64)v5 >= *((_QWORD *)this + 5) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v11, v7, v9, v10);
      WdLogEvent5_WdAssertion(v14);
    }
    *(_BYTE *)(*((_QWORD *)this + 6) + v5) &= 0xF0u;
    if ( (unsigned __int64)v5 >= *((_QWORD *)this + 10) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v11, v7, v9, v10);
      WdLogEvent5_WdAssertion(v15);
    }
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * v5) = a3;
  }
}
