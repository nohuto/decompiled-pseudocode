/*
 * XREFs of KiStartProfileTarget @ 0x1401D6F80
 * Callers:
 *     KeStartProfile @ 0x1401D6B70 (KeStartProfile.c)
 * Callees:
 *     KeOrAffinityEx @ 0x1400960D0 (KeOrAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1400D3250 (KeEnumerateNextProcessor.c)
 *     KeSubtractAffinityEx @ 0x1401447FC (KeSubtractAffinityEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

ULONG_PTR __fastcall KiStartProfileTarget(__int64 *Argument)
{
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  char *v11; // rbx
  struct _KPRCB *CurrentPrcb; // rdx
  ULONG_PTR result; // rax
  signed __int32 v14[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int16 *v15[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v16; // [rsp+30h] [rbp-38h]
  unsigned int v17; // [rsp+70h] [rbp+8h] BYREF

  v2 = *Argument;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8((unsigned __int8)KiProfileIrql);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument + 2, 0xFFFFFFFF) == 1 )
  {
    if ( *(_BYTE *)(v2 + 242) )
    {
      *((_BYTE *)Argument + 192) = 0;
    }
    else
    {
      v4 = *(_QWORD *)(v2 + 24);
      v5 = (_QWORD *)(v2 + 8);
      *(_BYTE *)(v2 + 242) = 1;
      if ( v4 )
      {
        v6 = *(_QWORD **)(v4 + 32);
        v7 = v4 + 24;
        if ( *v6 != v7 )
          __fastfail(3u);
        *v5 = v7;
        *(_QWORD *)(v2 + 16) = v6;
        *v6 = v5;
        *(_QWORD *)(v7 + 8) = v5;
      }
      else
      {
        v8 = (_QWORD *)qword_14030E528;
        if ( *(__int64 **)qword_14030E528 != &KiProfileListHead )
          __fastfail(3u);
        *v5 = &KiProfileListHead;
        *(_QWORD *)(v2 + 16) = v8;
        *v8 = v5;
        qword_14030E528 = v2 + 8;
      }
      v9 = KiProfileSourceListHead;
      if ( (__int64 *)KiProfileSourceListHead == &KiProfileSourceListHead )
      {
LABEL_14:
        v9 = Argument[23];
        Argument[23] = 0LL;
        *(_DWORD *)(v9 + 16) = *(__int16 *)(v2 + 240);
        *(_QWORD *)(v9 + 24) = 1310721LL;
        memset((void *)(v9 + 32), 0, 0xA0uLL);
        v10 = KiProfileSourceListHead;
        if ( *(__int64 **)(KiProfileSourceListHead + 8) != &KiProfileSourceListHead )
          __fastfail(3u);
        *(_QWORD *)v9 = KiProfileSourceListHead;
        *(_QWORD *)(v9 + 8) = &KiProfileSourceListHead;
        *(_QWORD *)(v10 + 8) = v9;
        KiProfileSourceListHead = v9;
      }
      else
      {
        while ( *(_DWORD *)(v9 + 16) != *(__int16 *)(v2 + 240) )
        {
          v9 = *(_QWORD *)v9;
          if ( (__int64 *)v9 == &KiProfileSourceListHead )
            goto LABEL_14;
        }
      }
      v16 = 0;
      v15[1] = *(unsigned __int16 **)(v2 + 80);
      v15[0] = (unsigned __int16 *)(v2 + 72);
      while ( !(unsigned int)KeEnumerateNextProcessor(&v17, v15) )
        ++*(_DWORD *)(v9 + 4LL * v17 + 192);
      v11 = (char *)(v9 + 24);
      KeSubtractAffinityEx((unsigned __int16 *)(v2 + 72), v11, (_BYTE *)Argument + 16);
      _InterlockedOr(v14, 0);
      KeOrAffinityEx((unsigned __int16 *)v11, (unsigned __int16 *)(v2 + 72), v11);
      *((_BYTE *)Argument + 192) = 1;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)Argument + 3);
  while ( *((int *)Argument + 3) > 0 )
    _mm_pause();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (Argument[CurrentPrcb->Group + 3] & CurrentPrcb->GroupSetMember) != 0 )
    HalStartProfileInterrupt((unsigned int)*(__int16 *)(v2 + 240));
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
