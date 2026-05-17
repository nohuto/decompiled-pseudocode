/*
 * XREFs of RtlpHpLfhOwnerMoveSubsegment @ 0x18001F024
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x18001A548 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x18001D85C (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800270C0 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall RtlpHpLfhOwnerMoveSubsegment(__int64 a1, __int64 *a2, int a3)
{
  char v3; // bl
  __int64 v4; // r10
  _QWORD *v5; // r9
  __int64 **v6; // rax
  _QWORD *v7; // r8
  __int64 *v8; // r11
  __int64 **v9; // r10
  __int64 ***v10; // r9
  int v12; // r8d
  __int64 *v13; // rcx

  v3 = a3;
  if ( *((_BYTE *)a2 + 38) )
  {
    if ( *((_BYTE *)a2 + 38) == 1 )
    {
      v4 = a1 + 40;
    }
    else
    {
      if ( *((_BYTE *)a2 + 38) != 2 )
        return a2;
      v4 = 0LL;
    }
    v5 = 0LL;
  }
  else
  {
    v4 = a1 + 24;
    v5 = (_QWORD *)(a1 + 8);
  }
  if ( a3 )
  {
    v12 = a3 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
        return a2;
      v6 = 0LL;
    }
    else
    {
      v6 = (__int64 **)(a1 + 40);
    }
    v7 = 0LL;
  }
  else
  {
    v6 = (__int64 **)(a1 + 24);
    v7 = (_QWORD *)(a1 + 8);
  }
  if ( v4 )
  {
    v8 = (__int64 *)*a2;
    v9 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v9 != a2 )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = (__int64)v9;
    if ( v5 )
      --*v5;
  }
  *((_BYTE *)a2 + 38) = v3;
  if ( v6 )
  {
    v10 = (__int64 ***)v6[1];
    *a2 = (__int64)v6;
    a2[1] = (__int64)v10;
    if ( *v10 != v6 )
      __fastfail(3u);
    *v10 = (__int64 **)a2;
    v6[1] = a2;
    if ( v7 )
      ++*v7;
    a2 = 0LL;
  }
  if ( (*(_BYTE *)a1 & 1) == 0 && *(_QWORD *)(a1 + 8) > 8uLL )
  {
    a2 = *v6;
    v13 = (__int64 *)**v6;
    if ( (__int64 **)(*v6)[1] != v6 || (__int64 *)v13[1] != a2 )
      __fastfail(3u);
    *v6 = v13;
    v13[1] = (__int64)v6;
    --*v7;
    *((_BYTE *)a2 + 38) = 2;
  }
  if ( a2 && *((_BYTE *)a2 + 38) == 2 )
    a2[2] = 0LL;
  return a2;
}
