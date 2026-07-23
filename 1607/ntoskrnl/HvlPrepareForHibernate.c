/*
 * XREFs of HvlPrepareForHibernate @ 0x1401BF134
 * Callers:
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlPrepareForHibernate(_OWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v5; // ebp
  _OWORD *v10; // rbx
  _QWORD *v11; // rsi
  PHYSICAL_ADDRESS v12; // r8
  PHYSICAL_ADDRESS v13; // rdx
  PHYSICAL_ADDRESS v15[4]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v16[4]; // [rsp+40h] [rbp-38h] BYREF

  v5 = 0;
  v10 = (_OWORD *)HvlpAcquireHypercallPage(v15, 1, 0LL, 88LL);
  v11 = (_QWORD *)HvlpAcquireHypercallPage(v16, 2, 0LL, 32LL);
  memset(v10, 0, 0x58uLL);
  v12 = v16[3];
  v13 = v15[3];
  *v10 = *a1;
  v10[1] = a1[1];
  v10[2] = a1[2];
  v10[3] = a1[3];
  v10[4] = a1[4];
  *((_BYTE *)v10 + 80) = 0;
  if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                           134LL,
                           (PHYSICAL_ADDRESS)v13.QuadPart,
                           (PHYSICAL_ADDRESS)v12.QuadPart) )
  {
    v5 = -1073741823;
  }
  else
  {
    *a2 = *v11;
    *a3 = v11[1];
    *a4 = v11[2];
    *a5 = v11[3];
  }
  HvlpReleaseHypercallPage((__int64)v15);
  HvlpReleaseHypercallPage((__int64)v16);
  return v5;
}
