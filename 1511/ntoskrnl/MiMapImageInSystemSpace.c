/*
 * XREFs of MiMapImageInSystemSpace @ 0x1403C72D4
 * Callers:
 *     MiSetPagesModified @ 0x1401D4A14 (MiSetPagesModified.c)
 *     MiRelocateImage @ 0x1403C5E30 (MiRelocateImage.c)
 *     MiGetSystemAddressForImage @ 0x1403CC454 (MiGetSystemAddressForImage.c)
 *     MiValidateSectionCreate @ 0x1404AEAF4 (MiValidateSectionCreate.c)
 *     MiParseComImage @ 0x1404B536C (MiParseComImage.c)
 *     MiCreateSessionDriverProtos @ 0x140621578 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MmMapViewInSystemSpaceEx @ 0x1403C7C94 (MmMapViewInSystemSpaceEx.c)
 *     MiMapImageInSystemProcess @ 0x1406212CC (MiMapImageInSystemProcess.c)
 */

__int64 __fastcall MiMapImageInSystemSpace(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  ULONG_PTR v8; // rax
  unsigned __int64 v9; // r15
  __int64 SessionId; // rax
  int v11; // r12d
  LONG *v12; // rax
  __int64 result; // rax
  int v14; // esi
  __int64 v15; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v16[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v19; // [rsp+D8h] [rbp+58h] BYREF

  memset(v16, 0, sizeof(v16));
  *(_QWORD *)a3 = 0LL;
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 64LL);
  if ( !v6 )
    return 3221225595LL;
  if ( (a2 & 1) != 0 )
    v7 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
  else
    v7 = ((v6 & 0xFFF) != 0) + (v6 >> 12);
  v16[6] = (unsigned __int64)v7 << 12;
  v8 = MI_REFERENCE_CONTROL_AREA_FILE(a1);
  v9 = v8;
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 8) + 52LL) & 0x10) != 0 )
    v16[5] = v8 | 1;
  else
    v16[5] = a1;
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  LODWORD(v16[7]) |= 0x20u;
  v18 = 0LL;
  HIDWORD(v16[7]) = HIDWORD(v16[7]) & 0x80000002 | ((SessionId & 0x7FFFF) << 12) | 2;
  v19 = v7 << 12;
  v11 = MmMapViewInSystemSpaceEx((unsigned int)v16, (unsigned int)&v17, (unsigned int)&v19, (unsigned int)&v18, 1LL);
  MI_DEREFERENCE_CONTROL_AREA_FILE(a1, v9);
  if ( v11 >= 0 )
  {
    v12 = &dword_1402FFA80;
LABEL_8:
    *(_QWORD *)(a3 + 16) = v12;
    *(_QWORD *)a3 = v17;
    result = 0LL;
    *(_DWORD *)(a3 + 8) = v7;
    return result;
  }
  if ( (a2 & 2) == 0 )
    return (unsigned int)v11;
  v15 = 0LL;
  KiStackAttachProcess(PsInitialSystemProcess, 0LL, a3 + 24);
  v14 = MiMapImageInSystemProcess(a1, a2, &v17, &v15);
  if ( v14 >= 0 )
  {
    v12 = (LONG *)&PsInitialSystemProcess[1].IdealNode[12];
    goto LABEL_8;
  }
  KiUnstackDetachProcess(($D4FCF91253F76F57393CBFE908971F67 *)(a3 + 24), 0LL);
  return (unsigned int)v14;
}
