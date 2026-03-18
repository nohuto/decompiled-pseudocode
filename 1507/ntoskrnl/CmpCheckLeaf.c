/*
 * XREFs of CmpCheckLeaf @ 0x1404CD0D0
 * Callers:
 *     CmpCheckKey @ 0x1404C2C40 (CmpCheckKey.c)
 * Callees:
 *     SetFailureLocation @ 0x1401DE608 (SetFailureLocation.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvIsCellAllocated @ 0x1404C29A0 (HvIsCellAllocated.c)
 *     RtlUpcaseUnicodeChar @ 0x1404CC660 (RtlUpcaseUnicodeChar.c)
 *     CmpComputeHashKey @ 0x140533C5C (CmpComputeHashKey.c)
 */

__int64 __fastcall CmpCheckLeaf(ULONG_PTR BugCheckParameter2, int a2, _WORD *a3, int a4)
{
  __int64 v4; // r12
  int v6; // ebx
  int v8; // esi
  int v9; // r14d
  _WORD *v10; // r13
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned __int64 v13; // r8
  unsigned __int8 *v14; // rdi
  char v15; // al
  __int64 v16; // rsi
  unsigned __int8 v17; // al
  int v18; // ecx
  __int64 v20; // r9
  int i; // ecx
  unsigned int v22; // eax
  int v23; // edx
  int j; // r10d
  unsigned __int64 v25; // rax
  unsigned __int16 v26; // ax
  __int16 v27; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 *v28; // [rsp+38h] [rbp-40h]
  int v29; // [rsp+80h] [rbp+8h] BYREF
  int v30; // [rsp+88h] [rbp+10h]
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp+20h]

  LODWORD(BugCheckParameter3) = a4;
  v30 = a2;
  v4 = *(_QWORD *)(BugCheckParameter2 + 56);
  v29 = -1;
  v6 = 0;
  v8 = a2;
  if ( ((*a3 - 26220) & 0xFDFF) != 0 )
    return 0LL;
  v9 = 0;
  if ( !a3[1] )
    return 0LL;
  while ( 1 )
  {
    v10 = &a3[4 * v9];
    if ( !HvIsCellAllocated(BugCheckParameter2, *((_DWORD *)v10 + 1), 0LL) )
      goto LABEL_16;
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
            BugCheckParameter2,
            *((unsigned int *)v10 + 1),
            &v29);
    if ( !v11 )
      break;
    v12 = -4 - *(_DWORD *)(v11 - 4);
    if ( v12 < 0x4C || (v13 = *(unsigned __int16 *)(v11 + 72), (unsigned int)v13 > v12 - 76) )
    {
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
    }
    else
    {
      v14 = (unsigned __int8 *)(v11 + 76);
      v27 = *(_WORD *)(v11 + 72);
      v15 = *(_BYTE *)(v11 + 2);
      v28 = v14;
      if ( *a3 == 26732 )
      {
        if ( (v15 & 0x20) != 0 )
        {
          if ( (_DWORD)v13 )
          {
            v16 = (unsigned int)v13;
            do
            {
              v17 = *v14;
              v18 = *v14;
              if ( *v14 >= 0x61u )
              {
                if ( v17 > 0x7Au )
                  v18 = RtlUpcaseUnicodeChar(v18);
                else
                  v18 = v17 - 32;
              }
              ++v14;
              v6 = v18 + 37 * v6;
              --v16;
            }
            while ( v16 );
            v8 = v30;
          }
        }
        else
        {
          v6 = CmpComputeHashKey(0LL, &v27);
        }
      }
      else
      {
        v20 = 0LL;
        if ( (v15 & 0x20) != 0 )
        {
          for ( i = 0; ; i += 8 )
          {
            v22 = 4;
            if ( (unsigned __int16)v13 <= 4u )
              v22 = v13;
            if ( (unsigned int)v20 >= v22 )
              break;
            v23 = v14[v20];
            v20 = (unsigned int)(v20 + 1);
            v6 += v23 << i;
          }
        }
        else
        {
          for ( j = 0; ; j += 8 )
          {
            v25 = 4LL;
            if ( (unsigned __int16)((unsigned __int16)v13 >> 1) <= 4u )
              v25 = v13 >> 1;
            if ( (unsigned int)v20 >= v25 )
              break;
            v26 = *(_WORD *)&v14[2 * v20];
            if ( v26 > 0xFFu )
            {
              v6 = 0;
              break;
            }
            v20 = (unsigned int)(v20 + 1);
            v6 += v26 << j;
          }
        }
      }
      if ( *((_DWORD *)v10 + 2) != v6 )
      {
        if ( (v8 & 0x20000) != 0
          || !CmpSelfHeal && (CmpBootType & 6) == 0
          || !HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0, 0LL) )
        {
          SetFailureLocation(v4, 0, 14, 4160, 2);
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
          return 4160LL;
        }
        *((_DWORD *)v10 + 2) = v6;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        SetFailureLocation(v4, 1, 14, 4160, 1);
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v29);
      v6 = 0;
    }
LABEL_16:
    if ( ++v9 >= (unsigned int)(unsigned __int16)a3[1] )
      return 0LL;
  }
  SetFailureLocation(v4, 0, 14, 4160, 3);
  return 4160LL;
}
