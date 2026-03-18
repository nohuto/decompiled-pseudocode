/*
 * XREFs of ?AllowModifyingAction@ProtectableFromChange@@QEAAXE_KE@Z @ 0x1C00A5A00
 * Callers:
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 */

void __fastcall ProtectableFromChange::AllowModifyingAction(ProtectableFromChange *this, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // di
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = a2;
  if ( (unsigned __int8)a2 >= *((_BYTE *)this + 20) && (_BYTE)a2 != 0xFF )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  LOBYTE(a2) = v4;
  (*(void (__fastcall **)(ProtectableFromChange *, __int64, __int64, __int64, char))(*(_QWORD *)this + 16LL))(
    this,
    a2,
    1LL,
    a3,
    -1);
  if ( v4 == 0xFF )
  {
    if ( a3 != 255 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v9);
    }
    *((_WORD *)this + 11) |= (2 << *((_BYTE *)this + 20)) - 1;
    memset(*((void **)this + 6), 0, *((_QWORD *)this + 5));
  }
  else
  {
    v7 = *((unsigned __int16 *)this + 11);
    LODWORD(v7) = v7 | (1 << v4);
    *((_WORD *)this + 11) = v7;
    if ( (unsigned __int64)v4 >= *((_QWORD *)this + 5) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v10);
    }
    *(_BYTE *)(*((_QWORD *)this + 6) + v4) &= 0xF0u;
    if ( (unsigned __int64)v4 >= *((_QWORD *)this + 10) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v11);
    }
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * v4) = a3;
  }
}
