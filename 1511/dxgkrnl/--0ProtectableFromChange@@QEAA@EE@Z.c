/*
 * XREFs of ??0ProtectableFromChange@@QEAA@EE@Z @ 0x1C0009FFC
 * Callers:
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C0004C90 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

ProtectableFromChange *__fastcall ProtectableFromChange::ProtectableFromChange(ProtectableFromChange *this)
{
  void *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rax
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  ProtectableFromChange *result; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  *(_QWORD *)this = &ProtectableFromChange::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 11) = 0;
  *((_BYTE *)this + 20) = 4;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = &Vector<unsigned __int64>::`vftable';
  *((_QWORD *)this + 5) = 4LL;
  *((_DWORD *)this + 14) = 1;
  v2 = operator new[](4uLL, 0x4E506456u, PagedPool);
  *((_QWORD *)this + 6) = v2;
  if ( v2 )
  {
    memset(v2, 0, *((_QWORD *)this + 5));
    *((_DWORD *)this + 14) = 2;
  }
  else
  {
    v14 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    WdLogEvent5_WdLowResource(v14);
    *((_DWORD *)this + 8) = -1073741801;
  }
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 4LL;
  *((_QWORD *)this + 8) = &Vector<unsigned __int64>::`vftable';
  v7 = 32LL;
  *((_DWORD *)this + 24) = 1;
  if ( !is_mul_ok(4uLL, 8uLL) )
    v7 = -1LL;
  v8 = operator new[](v7, 0x4E506456u, PagedPool);
  *((_QWORD *)this + 11) = v8;
  if ( v8 )
  {
    memset(v8, 0, 8LL * *((_QWORD *)this + 10));
    *((_DWORD *)this + 24) = 2;
  }
  else
  {
    v15 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
    WdLogEvent5_WdLowResource(v15);
    *((_DWORD *)this + 18) = -1073741801;
  }
  result = this;
  *((_DWORD *)this + 4) = 2;
  return result;
}
