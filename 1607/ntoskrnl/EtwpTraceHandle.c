/*
 * XREFs of EtwpTraceHandle @ 0x1406A2CC0
 * Callers:
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     ObCloseHandleTableEntry @ 0x14044D250 (ObCloseHandleTableEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExCheckSingleFilter @ 0x140159DFC (ExCheckSingleFilter.c)
 *     EtwpTraceKernelEventWithFilter @ 0x1402270D8 (EtwpTraceKernelEventWithFilter.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 */

void __fastcall EtwpTraceHandle(unsigned __int16 a1, __int64 a2, char *a3, __int64 a4)
{
  unsigned int v4; // r14d
  int v6; // r8d
  bool v7; // zf
  __int64 v8; // r15
  unsigned int v9; // r12d
  unsigned int v10; // edi
  char *v11; // rax
  int v12; // ebx
  __int16 *v13; // rsi
  int v14; // eax
  _WORD *PoolWithTag; // rbx
  char *v16; // rsi
  unsigned int v17; // r8d
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rax
  int v22; // [rsp+34h] [rbp-CCh]
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-C8h] BYREF
  char *v24; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  char *v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+58h] [rbp-A8h]
  __int16 v28; // [rsp+5Ch] [rbp-A4h]
  char **v29; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v30[2]; // [rsp+68h] [rbp-98h]
  int v31; // [rsp+78h] [rbp-88h]
  int v32; // [rsp+7Ch] [rbp-84h]
  _BYTE P[272]; // [rsp+90h] [rbp-70h] BYREF

  v4 = EtwpActiveSystemLoggers;
  v24 = a3;
  v6 = *(_DWORD *)(a4 + 192);
  v7 = !_BitScanForward((unsigned int *)&v8, EtwpActiveSystemLoggers);
  v25 = a2;
  v9 = 0;
  v22 = v6;
  if ( !v7 )
  {
    v10 = 1;
    do
    {
      v4 &= v4 - 1;
      v11 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v8;
      if ( v11 )
      {
        if ( (*((_DWORD *)v11 + 4) & 0x40) != 0 )
        {
          v12 = 0;
          v13 = &EtwpObjectTypeFilter[10 * v8];
          if ( *v13 )
          {
            while ( 1 )
            {
              v14 = ExCheckSingleFilter(v6, *(_DWORD *)&v13[2 * v12 + 2]);
              v6 = v22;
              if ( v14 )
                break;
              if ( ++v12 >= (unsigned int)(unsigned __int16)*v13 )
                goto LABEL_10;
            }
            v9 |= 1 << v8;
          }
        }
      }
LABEL_10:
      v7 = !_BitScanForward((unsigned int *)&v8, v4);
    }
    while ( !v7 );
    if ( v9 )
    {
      PoolWithTag = P;
      v16 = v24;
      v27 = v25;
      v28 = *(unsigned __int8 *)(a4 + 40);
      v29 = &v26;
      v26 = v24;
      v30[0] = 14LL;
      if ( a1 == 4385 )
      {
        v17 = 272;
        LODWORD(NumberOfBytes) = 272;
        while ( 1 )
        {
          v18 = ObQueryNameStringMode(v16, (__int64)PoolWithTag, v17, &NumberOfBytes, 0);
          if ( v18 != -1073741820 )
            break;
          if ( PoolWithTag != (_WORD *)P )
            ExFreePoolWithTag(PoolWithTag, 0);
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74777445u);
          if ( !PoolWithTag )
            goto LABEL_23;
          v17 = NumberOfBytes;
        }
        if ( !v18 )
        {
          v19 = 0x2000;
          if ( *PoolWithTag < 0x2000u )
            v19 = (unsigned __int16)*PoolWithTag;
          v10 = 2;
          v30[1] = *((_QWORD *)PoolWithTag + 1);
          v31 = v19;
          v32 = 0;
        }
      }
LABEL_23:
      v20 = 2LL * v10;
      v30[v20 - 1] = &EtwpNull;
      v30[v20] = 2LL;
      EtwpTraceKernelEventWithFilter((__int64)&v29, v10 + 1, v9, a1, 0x10501902u);
      if ( PoolWithTag )
      {
        if ( PoolWithTag != (_WORD *)P )
          ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
  }
}
