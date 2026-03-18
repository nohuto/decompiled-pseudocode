/*
 * XREFs of EtwpTraceHandle @ 0x1406E52FC
 * Callers:
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ObCloseHandleTableEntry @ 0x1404946D0 (ObCloseHandleTableEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpTraceKernelEventWithFilter @ 0x14025E6F4 (EtwpTraceKernelEventWithFilter.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140426100 (ObQueryNameStringMode.c)
 */

void __fastcall EtwpTraceHandle(unsigned __int16 a1, __int64 a2, char *a3, __int64 a4)
{
  unsigned int v4; // r11d
  unsigned int v5; // r14d
  bool v6; // zf
  __int64 v7; // rsi
  int v8; // r12d
  unsigned int v10; // edi
  char *v11; // rax
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  __int16 *v14; // r10
  unsigned int v15; // r9d
  __int64 v16; // rdx
  char v17; // r8
  _WORD *PoolWithTag; // rbx
  unsigned __int16 v19; // r15
  char *v20; // rsi
  unsigned int v21; // r8d
  int v22; // eax
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int NumberOfBytes; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 NumberOfBytes_4; // [rsp+34h] [rbp-CCh]
  _DWORD v28[2]; // [rsp+38h] [rbp-C8h]
  _DWORD v29[2]; // [rsp+40h] [rbp-C0h]
  char *v30; // [rsp+48h] [rbp-B8h]
  char *v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+58h] [rbp-A8h]
  __int16 v33; // [rsp+5Ch] [rbp-A4h]
  __int64 v34; // [rsp+60h] [rbp-A0h]
  char **v35; // [rsp+68h] [rbp-98h] BYREF
  int v36; // [rsp+70h] [rbp-90h]
  int v37; // [rsp+74h] [rbp-8Ch]
  __int64 v38; // [rsp+78h] [rbp-88h]
  int v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+84h] [rbp-7Ch]
  _BYTE P[272]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = EtwpActiveSystemLoggers;
  v5 = 0;
  v6 = !_BitScanForward((unsigned int *)&v7, EtwpActiveSystemLoggers);
  v8 = *(_DWORD *)(a4 + 192);
  v30 = a3;
  v34 = a2;
  NumberOfBytes_4 = a1;
  if ( !v6 )
  {
    v10 = 1;
    do
    {
      v4 &= v4 - 1;
      v11 = (char *)&EtwpGroupMasks + 32 * (unsigned int)v7;
      if ( v11 )
      {
        if ( (*((_DWORD *)v11 + 4) & 0x40) != 0 )
        {
          v12 = 0;
          v13 = (unsigned __int16)EtwpObjectTypeFilter[10 * v7];
          if ( EtwpObjectTypeFilter[10 * v7] )
          {
            v28[0] = v8;
            v14 = &EtwpObjectTypeFilter[10 * v7 + 2];
            do
            {
              v15 = 0;
              v16 = 0LL;
              v29[0] = *(_DWORD *)v14;
              while ( 1 )
              {
                v17 = *((_BYTE *)v29 + v16);
                if ( v17 == 42 )
                {
LABEL_14:
                  v5 |= 1 << v7;
                  goto LABEL_15;
                }
                if ( v17 != 63 && (v15 != 3 || (*((_BYTE *)v28 + v16) & 0x7F) != v17) && *((_BYTE *)v28 + v16) != v17 )
                  break;
                ++v15;
                ++v16;
                if ( v15 >= 4 )
                  goto LABEL_14;
              }
              ++v12;
              v14 += 2;
            }
            while ( v12 < v13 );
          }
        }
      }
LABEL_15:
      v6 = !_BitScanForward((unsigned int *)&v7, v4);
    }
    while ( !v6 );
    if ( v5 )
    {
      PoolWithTag = P;
      v37 = 0;
      v19 = NumberOfBytes_4;
      v20 = v30;
      v32 = v34;
      v33 = *(unsigned __int8 *)(a4 + 40);
      v35 = &v31;
      v31 = v30;
      v36 = 14;
      if ( NumberOfBytes_4 == 4385 )
      {
        v21 = 272;
        for ( NumberOfBytes = 272; ; v21 = NumberOfBytes )
        {
          v22 = ObQueryNameStringMode(v20, (__int64)PoolWithTag, v21, &NumberOfBytes, 0);
          if ( v22 != -1073741820 )
            break;
          if ( PoolWithTag != (_WORD *)P )
            ExFreePoolWithTag(PoolWithTag, 0);
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x74777445u);
          if ( !PoolWithTag )
            goto LABEL_30;
        }
        if ( !v22 )
        {
          v23 = 0x2000;
          if ( *PoolWithTag < 0x2000u )
            v23 = (unsigned __int16)*PoolWithTag;
          v24 = *((_QWORD *)PoolWithTag + 1);
          v10 = 2;
          v40 = 0;
          v38 = v24;
          v39 = v23;
        }
      }
LABEL_30:
      v25 = 2LL * v10;
      *(&v37 + 2 * v25) = 0;
      (&v35)[v25] = (char **)&EtwpNull;
      *(&v36 + 2 * v25) = 2;
      EtwpTraceKernelEventWithFilter((__int64)&v35, v10 + 1, v5, v19, 273684738);
      if ( PoolWithTag )
      {
        if ( PoolWithTag != (_WORD *)P )
          ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
  }
}
