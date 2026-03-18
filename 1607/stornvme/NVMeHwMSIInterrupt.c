/*
 * XREFs of NVMeHwMSIInterrupt @ 0x1C00028B0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeCompletionDpcRoutine @ 0x1C0001F70 (NVMeCompletionDpcRoutine.c)
 *     RequestPendingCompletion @ 0x1C00029B0 (RequestPendingCompletion.c)
 *     NVMeMaskInterrupt @ 0x1C000DA40 (NVMeMaskInterrupt.c)
 */

__int64 __fastcall NVMeHwMSIInterrupt(__int64 a1, unsigned __int16 a2)
{
  unsigned __int8 v4; // bp
  bool v5; // si
  __int64 v6; // r10
  __int64 v8; // r10
  unsigned int i; // r14d
  __int64 v10; // r10
  __int64 v11; // r10
  signed __int32 v12[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+20h] [rbp-38h]
  int *v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF

  if ( *(_WORD *)(a1 + 200) == 1 )
    a2 = -1;
  v4 = RequestPendingCompletion(a1, a2);
  if ( v4 )
  {
    v5 = *(_BYTE *)(a1 + 16) || (*(_DWORD *)(a1 + 88) & 1) != 0;
    if ( a2 == 0xFFFF || *(_WORD *)(a1 + 200) <= 1u )
    {
      if ( (*(_WORD *)(*(_QWORD *)(a1 + 376) + 16LL * *(unsigned __int16 *)(a1 + 474) + 14) & 1) != *(_WORD *)(a1 + 476) )
      {
        NVMeMaskInterrupt(a1, *(unsigned __int16 *)(a1 + 472));
        if ( v5 )
        {
          NVMeCompletionDpcRoutine(v8 + 24, a1, v8);
        }
        else
        {
          v15 = 0;
          v14 = &v15;
          v13 = 0LL;
          StorPortNotification(4098LL, a1, v8 + 24);
        }
      }
      for ( i = 0; *(_QWORD *)(a1 + 552); ++i )
      {
        if ( i >= *(unsigned __int16 *)(a1 + 234) )
          break;
        v10 = *(_QWORD *)(a1 + 552) + 168LL * i;
        if ( (*(_WORD *)(*(_QWORD *)v10 + 16LL * *(unsigned __int16 *)(v10 + 98) + 14) & 1) != *(_WORD *)(v10 + 100) )
        {
          NVMeMaskInterrupt(a1, *(unsigned __int16 *)(v10 + 96));
          if ( v5 )
          {
            NVMeCompletionDpcRoutine(v11 + 24, a1, v11);
          }
          else
          {
            v17 = 0;
            v14 = &v17;
            v13 = 0LL;
            StorPortNotification(4098LL, a1, v11 + 24);
          }
        }
      }
    }
    else
    {
      if ( a2 )
        v6 = *(_QWORD *)(a1 + 552) + 168LL * (a2 - 1);
      else
        v6 = a1 + 376;
      if ( !*(_BYTE *)(a1 + 18) && (unsigned int)(*(_DWORD *)(a1 + 12) - 1) <= 1 )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 112) + 12LL) = 1 << *(_WORD *)(v6 + 96);
        _InterlockedOr(v12, 0);
        *(_BYTE *)(a1 + 18) = 1;
      }
      if ( v5 )
      {
        NVMeCompletionDpcRoutine(v6 + 24, a1, v6);
      }
      else
      {
        v14 = &v16;
        v13 = 0LL;
        v16 = 0;
        StorPortNotification(4098LL, a1, v6 + 24);
      }
    }
    return v4;
  }
  else
  {
    ++*(_QWORD *)(a1 + 3240);
    return 0LL;
  }
}
