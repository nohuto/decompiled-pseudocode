/*
 * XREFs of ?VidSchiProcessHistoryBuffer@@YAXPEAU_VIDSCH_DMA_PACKET@@PEAU_VIDSCH_HISTORY_BUFFER_DATA@@@Z @ 0x1C002199C
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007F30 (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     Template_pqqqqCR4 @ 0x1C0023248 (Template_pqqqqCR4.c)
 */

void __fastcall VidSchiProcessHistoryBuffer(struct _VIDSCH_DMA_PACKET *a1, struct _VIDSCH_HISTORY_BUFFER_DATA *a2)
{
  struct _VIDSCH_DMA_PACKET *v2; // r9
  __int64 v3; // rsi
  _QWORD *v4; // r12
  __int64 v5; // rcx
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // edi
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // r13d
  unsigned int v14; // r12d
  __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  int v17; // r15d
  unsigned __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r8d
  __int64 v27; // rbx
  int v28; // ecx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // [rsp+50h] [rbp-39h]
  __m128i v32; // [rsp+58h] [rbp-31h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-21h] BYREF
  __int64 v34; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v35; // [rsp+88h] [rbp-1h]
  __int64 v36; // [rsp+90h] [rbp+7h]
  int v37; // [rsp+98h] [rbp+Fh]
  unsigned int v38; // [rsp+9Ch] [rbp+13h]
  unsigned int v39; // [rsp+A0h] [rbp+17h]
  int v40; // [rsp+A4h] [rbp+1Bh]
  unsigned int v42; // [rsp+100h] [rbp+77h]
  unsigned int v43; // [rsp+108h] [rbp+7Fh]
  unsigned __int64 v44; // [rsp+108h] [rbp+7Fh]

  v2 = a1;
  if ( (qword_1C0035050 & 0x188ED7) != 0
    && (qword_1C0035058 & 0xFFFFFFFFFFE77128uLL) == 0
    && (qword_1C0035050 & 0x4000) != 0 )
  {
    v3 = *(_QWORD *)a2;
    v4 = (_QWORD *)*((_QWORD *)a1 + 6);
    v31 = v4;
    v5 = v4[12];
    v43 = *((_DWORD *)a2 + 2);
    v6 = *(_QWORD *)a2 + v43;
    v32 = *(__m128i *)*(_QWORD *)a2;
    v7 = *(_QWORD *)(v5 + 24);
    v8 = _mm_cvtsi128_si32(_mm_srli_si128(v32, 8));
    v9 = *(_QWORD *)a2 + v8 + 16;
    if ( v9 < *(_QWORD *)a2 || v9 > v6 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdAssertion(v5, a2);
      v19[3] = v8;
LABEL_38:
      WdLogEvent5_WdAssertion(v19);
      return;
    }
    v10 = *(_QWORD *)(v7 + 8);
    v11 = *(_QWORD *)(v7 + 8LL * *(unsigned __int16 *)(v5 + 4) + 408);
    v12 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 2040LL)
                                      + 48LL * *(unsigned __int16 *)(v11 + 6)
                                      + 32)
                          + 4LL * *(unsigned __int16 *)(v11 + 8));
    v42 = v12;
    if ( (_DWORD)v12 )
    {
      if ( (unsigned int)v12 <= 0x20 )
      {
        v13 = 4;
        v14 = 16128;
      }
      else
      {
        v13 = 8;
        v14 = 8064;
      }
      v15 = **(_QWORD **)a2;
      v16 = HIDWORD(v32.m128i_i64[0]);
      while ( 1 )
      {
        v17 = v16;
        if ( v14 < (unsigned int)v16 )
          v17 = v14;
        v18 = (unsigned int)(v13 * v17);
        v44 = v18;
        if ( v18 > v6 - v9 )
          break;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        {
          Template_pqqqqCR4(v12, v15, v18, v31[7], v15, *((_DWORD *)v2 + 24), v12, v13 * v17, v9);
          v12 = v42;
          v15 = v32.m128i_i64[0];
          v18 = v44;
          v2 = a1;
        }
        v9 += v18;
        LODWORD(v16) = v16 - v17;
        if ( !(_DWORD)v16 )
          return;
      }
      v19 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12, v15);
      v19[3] = v9;
      v19[4] = v6;
      v19[5] = (unsigned int)(v13 * v17);
      goto LABEL_38;
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 824), &LockHandle);
    v20 = *(_QWORD *)(*(_QWORD *)(v7 + 8) + 816LL);
    if ( v20 )
    {
      v40 = 0;
      while ( 1 )
      {
        v38 = 0;
        v39 = 0;
        v21 = v4[8];
        v22 = *(_QWORD *)(v7 + 8);
        v35 = v43;
        v34 = v3;
        v36 = v20;
        v37 = 64512;
        v23 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *))DxgCoreInterface[34])(v22, v21, &v34);
        v27 = v23;
        if ( v23 < 0 )
          break;
        if ( v38 )
        {
          if ( v39 == 32 )
          {
            v28 = 4;
          }
          else
          {
            if ( v39 != 64 )
            {
              v30 = (_QWORD *)WdLogNewEntry5_WdAssertion(v25, v39);
              v30[3] = v39;
              goto LABEL_35;
            }
            v28 = 8;
          }
          v29 = v38 * v28;
          if ( (unsigned int)v29 > 0xFC00 )
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdAssertion(v29, v39);
            v30[3] = v38;
            v30[4] = v39;
            v30[5] = 64512LL;
            goto LABEL_35;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_pqqqqCR4(v29, v39, v26, v4[7], v32.m128i_i8[0], *((_DWORD *)a1 + 24), v39, v29, v20);
        }
        if ( !v40 )
          goto LABEL_36;
      }
      v30 = (_QWORD *)WdLogNewEntry5_WdAssertion(v25, v24);
      v30[3] = v27;
LABEL_35:
      WdLogEvent5_WdAssertion(v30);
    }
LABEL_36:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
}
