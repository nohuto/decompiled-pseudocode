/*
 * XREFs of ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C009752C
 * Callers:
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C000770C (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 */

void __fastcall ProtectableFromChange::DisallowModifyingAction(
        ProtectableFromChange *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int8 v4; // si
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v4 = a2;
  if ( (unsigned __int8)a2 >= *((_BYTE *)this + 20) && (_BYTE)a2 != 0xFF )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = this;
  if ( v4 == 0xFF )
  {
    *((_WORD *)this + 11) = 0;
    memset(*((void **)this + 6), 0, *((_QWORD *)this + 5));
    memset(*((void **)this + 11), 0, 8LL * *((_QWORD *)this + 10));
  }
  else
  {
    v10 = *((unsigned __int16 *)this + 11);
    LODWORD(v10) = v10 & ~(1 << v4);
    *((_WORD *)this + 11) = v10;
    if ( (unsigned __int64)v4 >= *((_QWORD *)this + 5) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10, v7, v8, v9);
      WdLogEvent5_WdAssertion(v12);
    }
    *(_BYTE *)(*((_QWORD *)this + 6) + v4) &= 0xF0u;
    if ( (unsigned __int64)v4 >= *((_QWORD *)this + 10) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v10, v7, v8, v9);
      WdLogEvent5_WdAssertion(v13);
    }
    *(_QWORD *)(*((_QWORD *)this + 11) + 8LL * v4) = 0LL;
  }
}
