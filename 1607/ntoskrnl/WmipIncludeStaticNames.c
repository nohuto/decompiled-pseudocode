/*
 * XREFs of WmipIncludeStaticNames @ 0x14069E290
 * Callers:
 *     WmipProcessEvent @ 0x140538080 (WmipProcessEvent.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000BD54 (RtlStringCbPrintfW.c)
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     RtlStringCbCopyW @ 0x1400C265C (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x1400C2858 (RtlStringCbCatW.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     WmipFindGEByGuid @ 0x1404735A0 (WmipFindGEByGuid.c)
 *     WmipReferenceEntry @ 0x140473870 (WmipReferenceEntry.c)
 *     WmipInsertStaticNames @ 0x1404E79C4 (WmipInsertStaticNames.c)
 *     WmipStaticInstanceNameSize @ 0x1404E7BA8 (WmipStaticInstanceNameSize.c)
 *     WmipUnreferenceEntry @ 0x1404E8014 (WmipUnreferenceEntry.c)
 */

unsigned int *__fastcall WmipIncludeStaticNames(unsigned int *Src, unsigned int a2)
{
  unsigned int *v3; // rbx
  __int64 v4; // rbp
  volatile signed __int64 *GEByGuid; // rdi
  unsigned int v6; // esi
  ULONG_PTR i; // rcx
  int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // ecx
  unsigned int v11; // edi
  unsigned int *PoolWithTag; // rax
  unsigned int *v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rdi
  const wchar_t *v16; // r12
  __int64 v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // rax
  unsigned int v20; // r15d
  unsigned int v21; // r15d
  unsigned int *v22; // rax
  unsigned int v23; // r14d
  _WORD *v24; // r15
  int v25; // eax
  unsigned int v26; // eax
  unsigned int v28; // [rsp+30h] [rbp-58h]
  unsigned int v29; // [rsp+34h] [rbp-54h]
  wchar_t pszDest[8]; // [rsp+38h] [rbp-50h] BYREF

  v3 = Src;
  v4 = 0LL;
  if ( (Src[11] & 7) != 0 )
  {
    GEByGuid = WmipFindGEByGuid((_QWORD *)Src + 3, 0);
    if ( GEByGuid )
    {
      v6 = v3[1];
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      for ( i = *((_QWORD *)GEByGuid + 7); (volatile signed __int64 *)i != GEByGuid + 7; i = *(_QWORD *)i )
      {
        if ( *(_DWORD *)(i + 80) == v6 )
        {
          v4 = i;
          WmipReferenceEntry(i);
          break;
        }
      }
      KeReleaseMutex(&WmipSMMutex, 0);
      WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, GEByGuid);
      if ( v4 )
      {
        v8 = *(_DWORD *)(v4 + 16);
        if ( (v8 & 3) != 0 )
        {
          if ( (v3[11] & 1) != 0 )
          {
            if ( a2 + 3 >= a2 )
            {
              v9 = (a2 + 3) & 0xFFFFFFFC;
              v10 = WmipStaticInstanceNameSize(v4);
              if ( v10 <= -1 - v9 )
              {
                v11 = v10 + v9;
                PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v11, 0x70696D57u);
                v13 = PoolWithTag;
                if ( PoolWithTag )
                {
                  memmove(PoolWithTag, v3, *v3);
                  WmipInsertStaticNames(v13, v11, v4);
LABEL_34:
                  v3 = v13;
                  goto LABEL_41;
                }
              }
            }
          }
          else
          {
            v14 = v3[13];
            v29 = v14;
            if ( v14 < *(_DWORD *)(v4 + 72) )
            {
              if ( (v8 & 2) != 0 )
              {
                v15 = -1LL;
                v16 = *(const wchar_t **)(*(_QWORD *)(v4 + 88) + 8LL * v14);
                v17 = -1LL;
                do
                  ++v17;
                while ( v16[v17] );
                v18 = 2 * v17 + 4;
              }
              else
              {
                v16 = (const wchar_t *)(*(_QWORD *)(v4 + 88) + 4LL);
                v15 = -1LL;
                v19 = -1LL;
                do
                  ++v19;
                while ( v16[v19] );
                v18 = 2 * v19 + 16;
              }
              if ( a2 + 1 >= a2 )
              {
                v20 = (a2 + 1) & 0xFFFFFFFE;
                v28 = v20;
                if ( v18 <= -1 - v20 )
                {
                  v21 = v18 + v20;
                  v22 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v21, 0x70696D57u);
                  v13 = v22;
                  if ( v22 )
                  {
                    memmove(v22, v3, *v3);
                    v23 = v18 - 2;
                    *v13 = v21;
                    v13[12] = v28;
                    v24 = (_WORD *)((char *)v13 + v28);
                    v25 = *(_DWORD *)(v4 + 16);
                    if ( (v25 & 2) != 0 )
                    {
                      *v24 = v23;
                      RtlStringCbCopyW(v24 + 1, v23, v16);
                    }
                    else
                    {
                      if ( (v25 & 0x20000) != 0 )
                        v13[11] |= 0x10000u;
                      RtlStringCbPrintfW(pszDest, 0xEuLL, L"%d", **(_DWORD **)(v4 + 88) + v29);
                      RtlStringCbCopyW(v24 + 1, v23, v16);
                      RtlStringCbCatW(v24 + 1, v23, pszDest);
                      do
                        ++v15;
                      while ( v24[v15 + 1] );
                      *v24 = 2 * (v15 + 1);
                    }
                    goto LABEL_34;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v26 = v3[11];
  if ( (v26 & 1) != 0 && a2 >= 0x3C )
  {
    v3[14] = 0;
  }
  else if ( (v26 & 6) != 0 && a2 >= 0x34 )
  {
    v3[12] = 0;
  }
LABEL_41:
  if ( v4 )
    WmipUnreferenceEntry((__int64)&WmipISChunkInfo, (volatile signed __int64 *)v4);
  return v3;
}
