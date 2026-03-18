/*
 * XREFs of ProcessCompletionQueues @ 0x1C000CC2C
 * Callers:
 *     NVMeHwInterrupt @ 0x1C0002320 (NVMeHwInterrupt.c)
 *     NVMeHwMSIInterrupt @ 0x1C0002370 (NVMeHwMSIInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000CE5C (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     NVMeCompletionDpcRoutine @ 0x1C000C830 (NVMeCompletionDpcRoutine.c)
 */

__int64 __fastcall ProcessCompletionQueues(__int64 a1, unsigned __int16 a2, char a3)
{
  char v4; // si
  __int64 v5; // r10
  __int64 result; // rax
  __int64 v7; // r10
  __int16 v8; // cx
  unsigned int i; // edi
  __int64 v10; // r10
  signed __int32 v11[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+20h] [rbp-38h]
  int *v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+60h] [rbp+8h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a1 + 16) || a3 || (v4 = 0, (*(_DWORD *)(a1 + 88) & 1) != 0) )
    v4 = 1;
  if ( a2 == 0xFFFF || *(_WORD *)(a1 + 192) <= 1u )
  {
    v7 = a1 + 368;
    result = *(_QWORD *)(a1 + 368);
    if ( (*(_WORD *)(16LL * *(unsigned __int16 *)(a1 + 466) + result + 14) & 1) != *(_WORD *)(a1 + 468) )
    {
      v8 = *(_WORD *)(a1 + 464);
      if ( !*(_BYTE *)(a1 + 18) && (unsigned int)(*(_DWORD *)(a1 + 12) - 1) <= 1 )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 104) + 12LL) = 1 << v8;
        _InterlockedOr(v11, 0);
        *(_BYTE *)(a1 + 18) = 1;
      }
      if ( v4 )
      {
        result = NVMeCompletionDpcRoutine(v7 + 24, a1, v7);
      }
      else
      {
        v14 = 0;
        v13 = &v14;
        v12 = 0LL;
        result = StorPortNotification(4098LL, a1, v7 + 24, v7);
      }
    }
    for ( i = 0; *(_QWORD *)(a1 + 544); ++i )
    {
      result = *(unsigned __int16 *)(a1 + 226);
      if ( i >= (unsigned int)result )
        break;
      v10 = *(_QWORD *)(a1 + 544) + 168LL * i;
      result = *(_QWORD *)v10;
      if ( (*(_WORD *)(16LL * *(unsigned __int16 *)(v10 + 98) + *(_QWORD *)v10 + 14) & 1) != *(_WORD *)(v10 + 100) )
      {
        if ( !*(_BYTE *)(a1 + 18) && (unsigned int)(*(_DWORD *)(a1 + 12) - 1) <= 1 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 104) + 12LL) = 1 << *(_WORD *)(v10 + 96);
          _InterlockedOr(v11, 0);
          *(_BYTE *)(a1 + 18) = 1;
        }
        if ( v4 )
        {
          result = NVMeCompletionDpcRoutine(v10 + 24, a1, v10);
        }
        else
        {
          v16 = 0;
          v13 = &v16;
          v12 = 0LL;
          result = StorPortNotification(4098LL, a1, v10 + 24, v10);
        }
      }
    }
  }
  else
  {
    if ( a2 )
      v5 = *(_QWORD *)(a1 + 544) + 168LL * (a2 - 1);
    else
      v5 = a1 + 368;
    if ( !*(_BYTE *)(a1 + 18) && (unsigned int)(*(_DWORD *)(a1 + 12) - 1) <= 1 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 104) + 12LL) = 1 << *(_WORD *)(v5 + 96);
      _InterlockedOr(v11, 0);
      *(_BYTE *)(a1 + 18) = 1;
    }
    if ( v4 )
    {
      return NVMeCompletionDpcRoutine(v5 + 24, a1, v5);
    }
    else
    {
      v15 = 0;
      v13 = &v15;
      v12 = 0LL;
      return StorPortNotification(4098LL, a1, v5 + 24, v5);
    }
  }
  return result;
}
