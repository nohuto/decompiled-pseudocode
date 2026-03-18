/*
 * XREFs of ??0ProtectableFromChange@@QEAA@EE@Z @ 0x1C0005C08
 * Callers:
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x1C00048E4 (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

ProtectableFromChange *__fastcall ProtectableFromChange::ProtectableFromChange(ProtectableFromChange *this)
{
  void *v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  void *v5; // rax
  __int64 v6; // rcx
  ProtectableFromChange *result; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  *(_QWORD *)this = &ProtectableFromChange::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 11) = 0;
  *((_BYTE *)this + 20) = 4;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = &Vector<ProtectableFromChange::ModifyingActionConstraints>::`vftable';
  *((_QWORD *)this + 5) = 4LL;
  *((_DWORD *)this + 14) = 1;
  v2 = operator new(4uLL, 0x4E506456u, PagedPool);
  *((_QWORD *)this + 6) = v2;
  if ( v2 )
  {
    memset(v2, 0, *((_QWORD *)this + 5));
    *((_DWORD *)this + 14) = 2;
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource(v3);
    WdLogEvent5_WdLowResource(v8);
    *((_DWORD *)this + 8) = -1073741801;
  }
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 4LL;
  *((_QWORD *)this + 8) = &Vector<unsigned __int64>::`vftable';
  v4 = 32LL;
  *((_DWORD *)this + 24) = 1;
  if ( !is_mul_ok(4uLL, 8uLL) )
    v4 = -1LL;
  v5 = operator new(v4, 0x4E506456u, PagedPool);
  *((_QWORD *)this + 11) = v5;
  if ( v5 )
  {
    memset(v5, 0, 8LL * *((_QWORD *)this + 10));
    *((_DWORD *)this + 24) = 2;
  }
  else
  {
    v9 = WdLogNewEntry5_WdLowResource(v6);
    WdLogEvent5_WdLowResource(v9);
    *((_DWORD *)this + 18) = -1073741801;
  }
  result = this;
  *((_DWORD *)this + 4) = 2;
  return result;
}
