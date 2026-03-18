/*
 * XREFs of ToDecStr @ 0x1C00603C0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateTarget @ 0x1C001476C (ValidateTarget.c)
 *     ValidateArgTypes @ 0x1C00182D0 (ValidateArgTypes.c)
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     WriteObject @ 0x1C00191F0 (WriteObject.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 */

__int64 __fastcall ToDecStr(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // ecx
  unsigned int v7; // eax
  __int64 v8; // rdi
  _BYTE *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 j; // r10
  unsigned __int8 v15; // dl
  __int64 v16; // r8
  __int64 v17; // r10
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  __int64 i; // r9
  char v23; // al
  __int64 v25; // [rsp+58h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, (__int64)"D");
  if ( !v4 )
  {
    v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 0x87u, (__int64)&v25);
    if ( !v4 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 2;
      v5 = *(_QWORD *)(a2 + 80);
      switch ( *(_WORD *)(v5 + 2) )
      {
        case 1:
          v19 = *(_QWORD *)(v5 + 16);
          LODWORD(v8) = 0;
          do
          {
            v8 = (unsigned int)(v8 + 1);
            v19 /= 0xAuLL;
          }
          while ( v19 );
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v8 + 1;
          ConPrintf("qwDataValue = %I64x, length=%x, size=%x\n", 0LL, v8, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v20 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v20;
          if ( v20 )
          {
            v21 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
            for ( i = (int)v8 - 1; i >= 0; --i )
            {
              v23 = HTOALookupTable[v21 % 0xA];
              v21 /= 0xAuLL;
              *(_BYTE *)(i + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v23;
            }
            goto LABEL_33;
          }
          break;
        case 2:
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(v5 + 24);
          ConPrintf("size=%x\n", *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v18 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v18;
          if ( v18 )
          {
            memmove(
              *(void **)(*(_QWORD *)(a2 + 88) + 32LL),
              *(const void **)(*(_QWORD *)(a2 + 80) + 32LL),
              *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
            return (unsigned int)WriteObject(a1, v25, *(_QWORD *)(a2 + 88));
          }
          break;
        case 3:
          v7 = *(_DWORD *)(v5 + 24);
          v8 = v7 - 1;
          if ( v7 )
          {
            v9 = *(_BYTE **)(v5 + 32);
            v10 = v7;
            do
            {
              if ( *v9 >= 0xAu )
              {
                if ( *v9 >= 0x64u )
                  v8 = (unsigned int)(v8 + 3);
                else
                  v8 = (unsigned int)(v8 + 2);
              }
              else
              {
                v8 = (unsigned int)(v8 + 1);
              }
              ++v9;
              --v10;
            }
            while ( v10 );
          }
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v8 + 1;
          ConPrintf("length=%x,size=%x\n", v8, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v11 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v11;
          if ( v11 )
          {
            v12 = *(_QWORD *)(a2 + 80);
            v13 = 0LL;
            for ( j = 0LL; (unsigned int)v13 < *(_DWORD *)(v12 + 24); v12 = *(_QWORD *)(a2 + 80) )
            {
              v15 = *(_BYTE *)(v13 + *(_QWORD *)(v12 + 32));
              if ( v15 >= 0xAu )
              {
                if ( v15 >= 0x64u )
                {
                  *(_BYTE *)(j + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v15 / 100 % 10];
                  j = (unsigned int)(j + 1);
                }
                v16 = v15 % 10;
                *(_BYTE *)(j + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v15 / 10 % 10];
                j = (unsigned int)(j + 1);
              }
              else
              {
                v16 = v15;
              }
              v13 = (unsigned int)(v13 + 1);
              *(_BYTE *)(j + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v16];
              v17 = (unsigned int)(j + 1);
              *(_BYTE *)(v17 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 44;
              j = (unsigned int)(v17 + 1);
            }
LABEL_33:
            *(_BYTE *)(v8 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 0;
            return (unsigned int)WriteObject(a1, v25, *(_QWORD *)(a2 + 88));
          }
          break;
        default:
          v4 = -1072431098;
          LogError(-1072431098);
          AcpiDiagTraceAmlError(a1, -1072431098);
          v6 = 186;
LABEL_30:
          PrintDebugMessage(v6, 0LL, 0LL, 0LL, 0LL);
          return v4;
      }
      v4 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      v6 = 185;
      goto LABEL_30;
    }
  }
  return v4;
}
