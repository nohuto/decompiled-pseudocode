/*
 * XREFs of PfpDeprioritizeOldPagesInWs @ 0x1406AEF38
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140454728 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MmUpdateOldWorkingSetPages @ 0x14021B8BC (MmUpdateOldWorkingSetPages.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpDeprioritizeOldPagesInWs(__int64 a1, KPROCESSOR_MODE a2)
{
  int updated; // ebx
  unsigned __int64 v4; // rax
  unsigned int v5; // esi
  int v6; // edi
  char v7; // r8
  int v9; // [rsp+40h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-20h]
  unsigned int v11; // [rsp+50h] [rbp-18h]
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  Object = 0LL;
  if ( *(_DWORD *)(a1 + 24) == 24 )
  {
    if ( a2 )
    {
      v4 = *(_QWORD *)(a1 + 16);
      if ( (v4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v4 + 24 > MmUserProbeAddress || v4 + 24 < v4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(&v9, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
    if ( v9 != 3
      || (v11 & 0xFFFFFFC0) != 0
      || (v5 = v11 & 0xF, v5 > 8)
      || (v6 = (v11 >> 4) & 3, v6 == 3)
      || v5 == 8 && !v6 )
    {
      updated = -1073741811;
    }
    else
    {
      updated = ObReferenceObjectByHandleWithTag(
                  Handle,
                  0x2000u,
                  (POBJECT_TYPE)PsProcessType,
                  a2,
                  0x73576650u,
                  &Object,
                  0LL);
      if ( updated >= 0 )
      {
        v7 = 0;
        if ( v6 )
        {
          v7 = 1;
          if ( v6 == 1 )
            v7 = 3;
        }
        updated = MmUpdateOldWorkingSetPages((__int64)Object, v5, v7);
      }
    }
  }
  else
  {
    updated = -1073741306;
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x73576650u);
  return (unsigned int)updated;
}
