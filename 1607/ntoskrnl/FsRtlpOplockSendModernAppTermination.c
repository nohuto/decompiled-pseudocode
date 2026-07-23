/*
 * XREFs of FsRtlpOplockSendModernAppTermination @ 0x1400AACBC
 * Callers:
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140077824 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140078674 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToII @ 0x14007B80C (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x1400B3464 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B9874 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockBreakNotify @ 0x14061E88C (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     FsRtlSendModernAppTermination @ 0x1400AAD94 (FsRtlSendModernAppTermination.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall FsRtlpOplockSendModernAppTermination(__int64 a1, __int64 a2)
{
  char v2; // r14
  ULONG v4; // edi
  int *PoolWithTag; // rax
  int *v6; // rbx
  _QWORD *v7; // rbp
  unsigned int v8; // edx
  _QWORD *i; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // [rsp+38h] [rbp+10h] BYREF
  int v13; // [rsp+3Ch] [rbp+14h]

  v2 = 0;
  if ( a2 || (v11 = *(_QWORD *)(a1 + 16)) == 0 )
  {
    v4 = 4096;
    PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x74725346u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x1000uLL);
      v7 = (_QWORD *)(a1 + 72);
      v2 = 1;
      v8 = 1;
      for ( i = (_QWORD *)*v7; ; i = (_QWORD *)*i )
      {
        if ( i == v7 )
        {
          *v6 = v8 - 1;
          goto LABEL_8;
        }
        if ( v8 >= 0x400 )
          break;
        v10 = v8++;
        v6[v10] = *(_DWORD *)(i[4] + 744LL);
      }
      memset(v6, 0, 0x1000uLL);
      *v6 = -1;
    }
    else
    {
      v12 = -1;
      v6 = &v12;
      v13 = 0;
    }
    v4 = 4;
  }
  else
  {
    v12 = 1;
    v6 = &v12;
    v4 = 8;
    v13 = *(_DWORD *)(v11 + 744);
  }
LABEL_8:
  FsRtlSendModernAppTermination(v6, v4);
  if ( v2 )
    ExFreePoolWithTag(v6, 0);
}
