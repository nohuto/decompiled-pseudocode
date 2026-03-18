/*
 * XREFs of MmCreateSystemSection @ 0x140153B60
 * Callers:
 *     MiCreateSectionForDriver @ 0x140575F0C (MiCreateSectionForDriver.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x140088A90 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     CcZeroEndOfLastPage @ 0x140088AE0 (CcZeroEndOfLastPage.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 */

__int64 __fastcall MmCreateSystemSection(
        __int64 *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10)
{
  int v10; // r14d
  int i; // edi
  int Section; // esi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdi
  struct _FILE_OBJECT *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // [rsp+30h] [rbp-48h]

  v10 = a10;
  for ( i = a4; ; a4 = i )
  {
    LOBYTE(v23) = 0;
    Section = MiCreateSection((int)&a8, a3, 0, a4, 16, a6, v23, a7, 0LL, 0, v10);
    if ( Section >= 0 )
      break;
    if ( Section != -1073741740 )
      return (unsigned int)Section;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  v15 = a8;
  *a1 = a8;
  v16 = MiSectionControlArea(v15);
  v17 = v16;
  if ( v16 && *(_QWORD *)(v16 + 64) )
  {
    v18 = (struct _FILE_OBJECT *)MI_REFERENCE_CONTROL_AREA_FILE(v16);
    CcZeroEndOfLastPage(v18, v19, v20, v21);
    MI_DEREFERENCE_CONTROL_AREA_FILE(v17, (unsigned __int64)v18);
  }
  return (unsigned int)Section;
}
