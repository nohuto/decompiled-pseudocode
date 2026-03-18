/*
 * XREFs of PrintObject @ 0x1C0043DFC
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     ReadObject @ 0x1C000D298 (ReadObject.c)
 *     ParseArgObj @ 0x1C000E12C (ParseArgObj.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     ParseScope @ 0x1C0012370 (ParseScope.c)
 *     AccFieldUnit @ 0x1C0016BC0 (AccFieldUnit.c)
 *     ParseLocalObj @ 0x1C0022868 (ParseLocalObj.c)
 *     PrintObject @ 0x1C0043DFC (PrintObject.c)
 *     NestAsyncEvalObject @ 0x1C0046868 (NestAsyncEvalObject.c)
 * Callees:
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 *     PrintBuffData @ 0x1C0043D48 (PrintBuffData.c)
 *     PrintObject @ 0x1C0043DFC (PrintObject.c)
 *     GetObjectTypeName @ 0x1C0044A2C (GetObjectTypeName.c)
 */

ULONG __fastcall PrintObject(__int64 a1)
{
  __int64 v2; // rcx
  const char *ObjectTypeName; // rax
  int v5; // edi

  v2 = *(unsigned __int16 *)(a1 + 2);
  switch ( (_DWORD)v2 )
  {
    case 1:
      return ConPrintf("0x%I64x", *(_QWORD *)(a1 + 16));
    case 2:
      return ConPrintf("\"%s\"", *(_QWORD *)(a1 + 32));
    case 3:
      ConPrintf("Buffer(0x%x)", *(_DWORD *)(a1 + 24));
      return PrintBuffData(*(unsigned __int8 **)(a1 + 32), *(_DWORD *)(a1 + 24));
    case 4:
      ConPrintf("Package(%d){", **(_DWORD **)(a1 + 32));
      v5 = 0;
      while ( v5 < **(_DWORD **)(a1 + 32) )
      {
        ConPrintf("\n\t");
        PrintObject(*(_QWORD *)(a1 + 32) + 8 * (5LL * v5++ + 1));
        if ( v5 < **(_DWORD **)(a1 + 32) )
          ConPrintf(",");
      }
      return ConPrintf("}");
    default:
      ObjectTypeName = (const char *)GetObjectTypeName(v2);
      return ConPrintf(
               "<Obj=%p,Type=%s,Value=0x%I64x,Buff=%p,Len=%d>",
               (const void *)a1,
               ObjectTypeName,
               *(_QWORD *)(a1 + 16),
               *(const void **)(a1 + 32),
               *(_DWORD *)(a1 + 24));
  }
}
