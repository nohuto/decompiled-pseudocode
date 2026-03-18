/*
 * XREFs of ToHexStr @ 0x1C0049400
 * Callers:
 *     <none>
 * Callees:
 *     WriteObject @ 0x1C0012B10 (WriteObject.c)
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     ValidateTarget @ 0x1C0015618 (ValidateTarget.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall ToHexStr(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 j; // r11
  __int64 v11; // r11
  __int64 v12; // r11
  unsigned int v13; // ecx
  __int64 v14; // r11
  __int64 v15; // r11
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  __int64 i; // r8
  __int64 v21; // rdx
  __int64 v23; // [rsp+48h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(*(_QWORD *)(a2 + 80), 0, (__int64)"D");
  if ( !v4 )
  {
    v4 = ValidateTarget(*(_QWORD *)(a2 + 80) + 40LL, 0x87u, (__int64)&v23);
    if ( !v4 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 2;
      v5 = *(_QWORD *)(a2 + 80);
      switch ( *(_WORD *)(v5 + 2) )
      {
        case 1:
          v17 = *(_QWORD *)(v5 + 16);
          LODWORD(v7) = 2;
          do
          {
            v17 >>= 4;
            v7 = (unsigned int)(v7 + 1);
          }
          while ( v17 );
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v7 + 1;
          ConPrintf("qwDataValue = %I64x, length=%x, size=%x\n", 0LL, v7, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v18 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v18;
          if ( v18 )
          {
            **(_BYTE **)(*(_QWORD *)(a2 + 88) + 32LL) = 48;
            *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) + 1LL) = 120;
            v19 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
            for ( i = (int)v7 - 1; i >= 2; --i )
            {
              v21 = v19 & 0xF;
              v19 >>= 4;
              *(_BYTE *)(i + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v21];
            }
            goto LABEL_20;
          }
          break;
        case 2:
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(v5 + 24);
          ConPrintf("size=%x\n", *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v16 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v16;
          if ( v16 )
          {
            memmove(
              *(void **)(*(_QWORD *)(a2 + 88) + 32LL),
              *(const void **)(*(_QWORD *)(a2 + 80) + 32LL),
              *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
            return (unsigned int)WriteObject(a1, v23, *(_QWORD *)(a2 + 88));
          }
          break;
        case 3:
          v7 = (unsigned int)(*(_DWORD *)(v5 + 24) + 4 * *(_DWORD *)(v5 + 24) - 1);
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = 5 * *(_DWORD *)(v5 + 24);
          ConPrintf("length=%x,size=%x\n", v7, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v8 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v8;
          if ( v8 )
          {
            v9 = 0LL;
            for ( j = 0LL; (unsigned int)v9 < *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL); j = (unsigned int)(v15 + 1) )
            {
              *(_BYTE *)(j + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 48;
              v11 = (unsigned int)(j + 1);
              *(_BYTE *)(v11 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 120;
              v12 = (unsigned int)(v11 + 1);
              v13 = *(unsigned __int8 *)(v9 + *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL));
              v9 = (unsigned int)(v9 + 1);
              *(_BYTE *)(v12 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[(unsigned __int64)v13 >> 4];
              v14 = (unsigned int)(v12 + 1);
              *(_BYTE *)(v14 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v13 & 0xF];
              v15 = (unsigned int)(v14 + 1);
              *(_BYTE *)(v15 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 44;
            }
LABEL_20:
            *(_BYTE *)(v7 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 0;
            return (unsigned int)WriteObject(a1, v23, *(_QWORD *)(a2 + 88));
          }
          break;
        default:
          v4 = -1072431098;
          LogError(-1072431098);
          v6 = 188;
LABEL_17:
          PrintDebugMessage(v6, 0LL, 0LL, 0LL, 0LL);
          return v4;
      }
      v4 = -1073741670;
      LogError(-1073741670);
      v6 = 187;
      goto LABEL_17;
    }
  }
  return v4;
}
