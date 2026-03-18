/*
 * XREFs of ProcessorUpdateInterruptProperties @ 0x1C00A2008
 * Callers:
 *     AcpiUpdateInterruptProperties @ 0x1C009B820 (AcpiUpdateInterruptProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorUpdateInterruptProperties(int a1, int a2)
{
  unsigned int v2; // ebx
  char v5; // si
  unsigned int v6; // edi
  struct _RTL_RANGE_LIST *v7; // rcx
  _DWORD *UserData; // rax
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-38h] BYREF
  PRTL_RANGE Range; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  v5 = 0;
  v6 = 0;
  if ( !ProcessorInstanceCount )
    return (unsigned int)-1073741275;
  do
  {
    v7 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v6);
    if ( v7 )
    {
      RtlGetFirstRange(v7, &Iterator, &Range);
      while ( Range )
      {
        UserData = Range->UserData;
        if ( UserData && UserData[4] == a1 )
        {
          v5 = 1;
          Range->Attributes = (a2 == 1) + 1;
        }
        RtlGetNextRange(&Iterator, &Range, 1u);
      }
    }
    ++v6;
  }
  while ( v6 < ProcessorInstanceCount );
  if ( !v5 )
    return (unsigned int)-1073741275;
  return v2;
}
