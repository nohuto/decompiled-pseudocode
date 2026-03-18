/*
 * XREFs of HMInitHandleTable @ 0x1C013931C
 * Callers:
 *     Win32UserInitialize @ 0x1C0138B1C (Win32UserInitialize.c)
 * Callees:
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0012D1C (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 HMInitHandleTable()
{
  _WORD *v0; // rbx
  __int64 result; // rax

  v0 = gpvSharedBase;
  gHandlePages = 0LL;
  qword_1C0100040 = 0LL;
  qword_1C0100038 = 0LL;
  qword_1C01003E8 = (__int64)gpvSharedBase;
  dword_1C01003F0 = 24;
  *((_QWORD *)gpsi + 1) = 0LL;
  *((_DWORD *)gpsi + 212) = 0;
  if ( (unsigned int)HMGrowHandleTable() )
  {
    *(_QWORD *)v0 = 0LL;
    result = 1LL;
    v0[9] = 1;
    *((_BYTE *)v0 + 16) = 0;
    qword_1C0100038 = 2LL;
  }
  else
  {
    qword_1C01003E8 = 0LL;
    return 0LL;
  }
  return result;
}
