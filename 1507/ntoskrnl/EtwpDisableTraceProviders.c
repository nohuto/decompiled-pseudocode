/*
 * XREFs of EtwpDisableTraceProviders @ 0x1404D18CC
 * Callers:
 *     EtwpStopLoggerInstance @ 0x14040F284 (EtwpStopLoggerInstance.c)
 * Callees:
 *     PsEnumProcesses @ 0x14041C0E4 (PsEnumProcesses.c)
 *     EtwpGetNextGuidEntry @ 0x1404D0D3C (EtwpGetNextGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404D196C (EtwpClearSessionAndUnreferenceEntry.c)
 */

__int64 __fastcall EtwpDisableTraceProviders(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *i; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rbx
  __int64 *j; // rcx
  __int64 result; // rax
  __int64 v13; // r8
  __int64 *v14; // rbx
  unsigned int v15; // ebx
  _WORD *v16; // rdi
  unsigned int v17; // [rsp+38h] [rbp+10h] BYREF
  char v18; // [rsp+3Ch] [rbp+14h]

  for ( i = EtwpGetNextGuidEntry(0LL, 0, a3, a4); ; i = EtwpGetNextGuidEntry(v10, 0, v8, v9) )
  {
    v10 = (__int64 *)i;
    if ( !i )
      break;
    EtwpClearSessionAndUnreferenceEntry(a1, i, 0LL);
  }
  for ( j = 0LL; ; j = v14 )
  {
    result = (__int64)EtwpGetNextGuidEntry(j, 2, v6, v7);
    v14 = (__int64 *)result;
    if ( !result )
      break;
    LOBYTE(v13) = 2;
    EtwpClearSessionAndUnreferenceEntry(a1, result, v13);
  }
  v15 = 0;
  v16 = (_WORD *)0xFFFFF78000000380LL;
  do
  {
    if ( *(_BYTE *)v16 == (_BYTE)a1 )
    {
      if ( v15 <= 1 )
      {
        v17 = v15;
        v18 = 0;
        result = PsEnumProcesses(
                   (__int64 (__fastcall *)(__int64, __int64))EtwpUpdateProcessTracingCallback,
                   (__int64)&v17);
      }
      *v16 = 0;
    }
    ++v15;
    ++v16;
  }
  while ( v15 < 9 );
  return result;
}
