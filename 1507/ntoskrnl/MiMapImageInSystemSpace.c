/*
 * XREFs of MiMapImageInSystemSpace @ 0x14051BD60
 * Callers:
 *     MiSetPagesModified @ 0x1402165B0 (MiSetPagesModified.c)
 *     MiParseComImage @ 0x14046E4A4 (MiParseComImage.c)
 *     MiRelocateImage @ 0x14046E680 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 *     MiGetSystemAddressForImage @ 0x140576AF0 (MiGetSystemAddressForImage.c)
 *     MiCreateSessionDriverProtos @ 0x1406A0C0C (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MmMapViewInSystemSpaceEx @ 0x14051BF38 (MmMapViewInSystemSpaceEx.c)
 *     MiMapImageInSystemProcess @ 0x1406A0960 (MiMapImageInSystemProcess.c)
 */

__int64 __fastcall MiMapImageInSystemSpace(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  ULONG_PTR v8; // rax
  unsigned __int64 v9; // r15
  __int64 SessionId; // rax
  int v11; // r12d
  signed __int32 *v12; // rax
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
    v12 = dword_14034FF40;
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
  KiStackAttachProcess(PsInitialSystemProcess, 0, a3 + 24);
  v14 = MiMapImageInSystemProcess(a1, a2, &v17, &v15);
  if ( v14 >= 0 )
  {
    v12 = (signed __int32 *)&PsInitialSystemProcess[1].IdealNode[8];
    goto LABEL_8;
  }
  KiUnstackDetachProcess((struct _KTHREAD *)(a3 + 24), 0);
  return (unsigned int)v14;
}
