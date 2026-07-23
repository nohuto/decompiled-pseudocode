/*
 * XREFs of WmipLegacyEtwCallback @ 0x140576238
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     WmipReferenceEntry @ 0x140473870 (WmipReferenceEntry.c)
 *     WmipQueueLegacyEtwWork @ 0x14057645C (WmipQueueLegacyEtwWork.c)
 */

void __fastcall WmipLegacyEtwCallback(__int64 a1, unsigned __int8 a2, _QWORD *a3, _QWORD *a4)
{
  int v7; // ebx
  __int64 v8; // rax
  __int64 *v9; // r14
  __int64 *v10; // rax
  int v11; // ecx
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rsi
  __int64 v14; // r12
  __int64 *i; // rdi
  int v16; // eax
  ULONG_PTR v17; // rbx

  if ( a2 <= 1u )
  {
    v7 = 0;
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    if ( a4[14] )
    {
      v8 = a2 ? *a3 : 0LL;
      v9 = a4 + 7;
      a4[15] = v8;
      v10 = (__int64 *)a4[7];
      if ( v10 != a4 + 7 )
      {
        do
        {
          v11 = *((_DWORD *)v10 + 4);
          if ( (v11 & 0x100000) != 0 && (a2 || (v11 & 0x200000) != 0) )
            ++v7;
          v10 = (__int64 *)*v10;
        }
        while ( v10 != v9 );
        if ( v7 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v7 + 40, 0x70696D57u);
          v13 = PoolWithTag;
          if ( PoolWithTag )
          {
            PoolWithTag[4] = 2;
            v14 = 0LL;
            *((_QWORD *)PoolWithTag + 3) = *a3;
            *((_BYTE *)PoolWithTag + 36) = a2;
            PoolWithTag[8] = v7;
            for ( i = (__int64 *)*v9; i != v9; i = (__int64 *)*i )
            {
              v16 = *((_DWORD *)i + 4);
              if ( (v16 & 0x100000) != 0 && (a2 || (v16 & 0x200000) != 0) )
              {
                v17 = i[8];
                WmipReferenceEntry(v17);
                *(_QWORD *)&v13[2 * v14 + 10] = v17;
                v14 = (unsigned int)(v14 + 1);
                if ( a2 )
                  *((_DWORD *)i + 4) |= 0x200000u;
                else
                  *((_DWORD *)i + 4) &= ~0x200000u;
              }
            }
            WmipQueueLegacyEtwWork(v13, a4, 0LL);
          }
        }
      }
    }
    KeReleaseMutex(&WmipSMMutex, 0);
  }
}
