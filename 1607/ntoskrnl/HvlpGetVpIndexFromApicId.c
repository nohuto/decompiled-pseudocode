/*
 * XREFs of HvlpGetVpIndexFromApicId @ 0x1401BB89C
 * Callers:
 *     HvlpEnableNextLogicalProcessor @ 0x1401BB610 (HvlpEnableNextLogicalProcessor.c)
 *     HvlHalGetVpIndexFromApicId @ 0x1401BCCB0 (HvlHalGetVpIndexFromApicId.c)
 *     HvlInitializeProcessor @ 0x14054E878 (HvlInitializeProcessor.c)
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x1401BB178 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1401BBC30 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpGetVpIndexFromApicId(int a1, _DWORD *a2)
{
  unsigned int v2; // esi
  __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r15
  PHYSICAL_ADDRESS v8; // r8
  PHYSICAL_ADDRESS v9; // rdx
  PHYSICAL_ADDRESS v11[4]; // [rsp+20h] [rbp-58h] BYREF
  PHYSICAL_ADDRESS v12[4]; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0;
  v5 = HvlpAcquireHypercallPage(v11, 1, 0LL, 16LL);
  v6 = HvlpAcquireHypercallPage(v12, 2, 0LL, 4LL);
  *(_QWORD *)v5 = -1LL;
  v7 = (_DWORD *)v6;
  v8 = v12[3];
  v9 = v11[3];
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_DWORD *)(v5 + 16) = a1;
  if ( (unsigned __int16)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HvcallCodeVa)(
                           0x10000009ALL,
                           (PHYSICAL_ADDRESS)v9.QuadPart,
                           (PHYSICAL_ADDRESS)v8.QuadPart) )
    v2 = -1073741823;
  else
    *a2 = *v7;
  HvlpReleaseHypercallPage(v11);
  HvlpReleaseHypercallPage(v12);
  return v2;
}
