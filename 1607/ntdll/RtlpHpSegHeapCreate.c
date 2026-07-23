/*
 * XREFs of RtlpHpSegHeapCreate @ 0x18007F460
 * Callers:
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 *     RtlpHpMetadataHeapInit @ 0x18007F410 (RtlpHpMetadataHeapInit.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18001BC10 (RtlRbInsertNodeEx.c)
 *     RtlpHpSegHeapDestroy @ 0x180052518 (RtlpHpSegHeapDestroy.c)
 *     RtlpHpLfhContextInitialize @ 0x18007F704 (RtlpHpLfhContextInitialize.c)
 *     RtlpHpVsContextInitialize @ 0x18007F858 (RtlpHpVsContextInitialize.c)
 *     RtlpHpSegHeapAllocate @ 0x18007F918 (RtlpHpSegHeapAllocate.c)
 *     RtlpHpSegHeapAddSegment @ 0x18007FADC (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentInitialize @ 0x18007FB28 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegSegmentAllocate @ 0x18007FB80 (RtlpHpSegSegmentAllocate.c)
 *     RtlpGetHeapInterceptorIndex @ 0x18008F230 (RtlpGetHeapInterceptorIndex.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x1800A6AE0 (NtQuerySystemInformation.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 *     RtlpHeapLogRangeCreate @ 0x1800F7DA0 (RtlpHeapLogRangeCreate.c)
 *     RtlpLogHeapCreateEvent @ 0x1800F920C (RtlpLogHeapCreateEvent.c)
 */

__int64 __fastcall RtlpHpSegHeapCreate(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  NTSTATUS v6; // eax
  char v7; // cl
  __int64 v8; // rax
  __int64 v9; // rdi
  _RTL_BALANCED_NODE **v10; // r12
  _QWORD *v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rsi
  unsigned __int8 v15; // al
  __int64 v16; // rax
  __int64 v17; // r15
  _RTL_BALANCED_NODE *v18; // rdx
  BOOLEAN v19; // r8
  __int64 v20; // rcx
  unsigned __int16 v21; // cx
  _RTL_BALANCED_NODE *v22; // rax
  unsigned int v23; // [rsp+30h] [rbp-59h]
  __int64 v24; // [rsp+38h] [rbp-51h]
  void *v25; // [rsp+40h] [rbp-49h] BYREF
  __int64 (__fastcall *v26)(__int64, __int64, char); // [rsp+48h] [rbp-41h]
  __int64 (__fastcall *v27)(PVOID, __int64); // [rsp+50h] [rbp-39h]
  __int64 (__fastcall *v28)(__int64, __int64, unsigned int); // [rsp+58h] [rbp-31h]
  __int64 (__fastcall *v29)(_RTL_SRWLOCK *, __int64); // [rsp+60h] [rbp-29h]
  char SystemInformation[56]; // [rsp+70h] [rbp-19h] BYREF
  char v31; // [rsp+A8h] [rbp+1Fh]

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v6 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  v7 = v31;
  if ( v6 < 0 )
    v7 = 1;
  v31 = v7;
  v8 = RtlpHpSegHeapAllocate(a1, (unsigned int)v7);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  *(_DWORD *)(v8 + 16) = -571548178;
  v10 = (_RTL_BALANCED_NODE **)(v8 + 120);
  v11 = (_QWORD *)(v8 + 96);
  v11[1] = v11;
  *v11 = v11;
  *(_DWORD *)(v9 + 20) = a1;
  *(_QWORD *)(v9 + 120) = 0LL;
  *(_QWORD *)(v9 + 128) = 0LL;
  *(_QWORD *)(v9 + 88) = 0LL;
  *(_QWORD *)(v9 + 48) = 0LL;
  *(_QWORD *)(v9 + 56) = 0LL;
  *(_QWORD *)(v9 + 64) = 0LL;
  *(_QWORD *)(v9 + 144) = 0LL;
  if ( (*(_DWORD *)(v9 + 20) & 0x20000000) != 0 )
    *(_DWORD *)(v9 + 32) = (unsigned __int16)RtlpGetHeapInterceptorIndex(RtlpStackTraceDatabaseLogPrefix);
  v29 = 0LL;
  v25 = RtlpHpSegVsAllocate;
  v28 = RtlpHpSegLfhVsDecommit;
  v26 = RtlpHpSegLfhVsFree;
  v27 = RtlpHpSegLfhVsCommit;
  RtlpHpVsContextInitialize(v9 + 176, v9, &v25);
  v25 = RtlpHpSegLfhAllocate;
  v28 = RtlpHpSegLfhVsDecommit;
  v26 = RtlpHpSegLfhVsFree;
  v27 = RtlpHpSegLfhVsCommit;
  v29 = RtlpHpSegLfhExtendContext;
  RtlpHpLfhContextInitialize(v9 + 288, v9, (unsigned int)v31, &v25);
  v24 = (unsigned __int8)((a2 + 0xFFFFF) >> 20);
  v12 = (unsigned __int8)((unsigned __int64)(a3 + 4095) >> 12);
  if ( v24 )
  {
LABEL_12:
    if ( v12 > 0xFE )
    {
      v15 = -2;
      v12 -= 254LL;
    }
    else
    {
      v15 = v12;
      v12 = 0LL;
    }
    v23 = v15;
    v16 = RtlpHpSegSegmentAllocate((PVOID)v9);
    v17 = v16;
    if ( v16 )
    {
      --v24;
      *(_DWORD *)(v16 + 64) = -857879331;
      RtlpHpSegSegmentInitialize(v16, v23);
      v18 = *v10;
      v19 = 0;
      v21 = *(_WORD *)(v20 + 90);
      if ( !*v10 )
        goto LABEL_16;
      while ( 1 )
      {
        if ( v21 < WORD1(v18[1].Left) )
        {
          v22 = v18->Children[0];
          if ( !v18->Children[0] )
          {
            v19 = 0;
LABEL_16:
            RtlRbInsertNodeEx((PRTL_RB_TREE)(v9 + 120), v18, v19, (PRTL_BALANCED_NODE)(v17 + 64));
            *(_QWORD *)(v9 + 24) += (unsigned __int8)~*(_BYTE *)(v17 + 90);
            RtlpHpSegHeapAddSegment(v9, v17);
            if ( !v24 )
              goto LABEL_8;
            goto LABEL_12;
          }
        }
        else
        {
          v22 = v18->Children[1];
          if ( !v22 )
          {
            v19 = 1;
            goto LABEL_16;
          }
        }
        v18 = v22;
      }
    }
    v13 = 0LL;
LABEL_29:
    if ( v9 )
      RtlpHpSegHeapDestroy((_QWORD *)v9);
  }
  else
  {
LABEL_8:
    *(_QWORD *)(v9 + 136) = 0LL;
    v13 = v9;
    v9 = 0LL;
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeCreate(v13, *(_QWORD *)(v13 + 168) - v13, a1);
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      RtlpLogHeapCreateEvent(v13, a1, *(_QWORD *)(v13 + 168) - v13, *(_DWORD *)(v13 + 160) - v13, MEMORY[0x7FFE0380]);
      goto LABEL_29;
    }
  }
  return v13;
}
