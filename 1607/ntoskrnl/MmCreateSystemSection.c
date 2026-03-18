/*
 * XREFs of MmCreateSystemSection @ 0x1400821E0
 * Callers:
 *     MiCreateSectionForDriver @ 0x14047D2C8 (MiCreateSectionForDriver.c)
 * Callees:
 *     CcZeroEndOfLastPage @ 0x140024850 (CcZeroEndOfLastPage.c)
 *     MiDereferenceControlAreaFile @ 0x140026640 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140026690 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x14002C4D0 (MiSectionControlArea.c)
 *     KeDelayExecutionThread @ 0x1400D0580 (KeDelayExecutionThread.c)
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
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

  v10 = a10;
  for ( i = a4; ; a4 = i )
  {
    Section = MiCreateSection((int)&a8, a3, 0, a4, 16, a6, 0LL, 0, a7, 0LL, 0, v10);
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
    v18 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v16);
    CcZeroEndOfLastPage(v18);
    MiDereferenceControlAreaFile(v17, (unsigned __int64)v18);
  }
  return (unsigned int)Section;
}
