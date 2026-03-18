/*
 * XREFs of ProcessorpFindAffinitizedIdtEntries @ 0x1C0089270
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0089060 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqDss @ 0x1C00221A0 (WPP_RECORDER_SF_DDqDss.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     WPP_RECORDER_SF_qDss @ 0x1C0062038 (WPP_RECORDER_SF_qDss.c)
 *     IcIsInterruptTypeSecondary @ 0x1C00895C8 (IcIsInterruptTypeSecondary.c)
 *     IcCheckIrqConflict @ 0x1C008AA80 (IcCheckIrqConflict.c)
 */

NTSTATUS __fastcall ProcessorpFindAffinitizedIdtEntries(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        unsigned int *a9)
{
  char v9; // si
  __int64 *v10; // r13
  char IsInterruptTypeSecondary; // al
  int v12; // r8d
  __int64 v13; // r9
  int *v14; // rax
  int v15; // r15d
  unsigned int v16; // r14d
  int v17; // edx
  int v18; // edi
  int v19; // r12d
  __int64 v20; // rbx
  __int64 v21; // rsi
  unsigned __int8 v22; // r14
  unsigned int i; // ebx
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v25; // rcx
  BOOLEAN (__stdcall *Callback)(PVOID, struct _RTL_RANGE *); // r9
  NTSTATUS result; // eax
  char v28; // al
  unsigned int v29; // r10d
  char v30; // cl
  unsigned int v31; // esi
  const char *v32; // rdx
  const char *v33; // r8
  const char *v34; // rdx
  const char *v35; // r8
  int AttributeAvailableMask; // [rsp+20h] [rbp-C1h]
  unsigned __int8 Available; // [rsp+60h] [rbp-81h] BYREF
  char v38; // [rsp+61h] [rbp-80h]
  char v39[2]; // [rsp+62h] [rbp-7Fh] BYREF
  int v40; // [rsp+64h] [rbp-7Dh]
  struct _PROCESSOR_NUMBER v41; // [rsp+68h] [rbp-79h]
  int v42; // [rsp+6Ch] [rbp-75h]
  unsigned int v43; // [rsp+70h] [rbp-71h]
  unsigned int v44; // [rsp+74h] [rbp-6Dh]
  unsigned int v45; // [rsp+78h] [rbp-69h]
  int v46; // [rsp+7Ch] [rbp-65h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+80h] [rbp-61h] BYREF
  __int128 Context; // [rsp+88h] [rbp-59h] BYREF
  _DWORD *v49; // [rsp+98h] [rbp-49h]
  __int64 v50; // [rsp+A0h] [rbp-41h]
  __int64 *v51; // [rsp+A8h] [rbp-39h]
  __int64 v52; // [rsp+B0h] [rbp-31h]
  unsigned int *v53; // [rsp+B8h] [rbp-29h]
  _DWORD v54[4]; // [rsp+C0h] [rbp-21h] BYREF

  v9 = a5;
  v10 = a2;
  v53 = a9;
  v38 = a4;
  v51 = a2;
  v52 = a1;
  v46 = ~(a5 - 1);
  Context = 0LL;
  if ( a5 != (a5 & v46) )
    return -1073741581;
  if ( a5 > 0x10 )
    return -1073741581;
  IsInterruptTypeSecondary = IcIsInterruptTypeSecondary(a6);
  if ( IsInterruptTypeSecondary )
  {
    if ( a5 > 1 )
      return -1073741581;
  }
  v50 = 0LL;
  v40 = 0;
  if ( IsInterruptTypeSecondary )
    v40 = 256;
  v54[0] = 2;
  v12 = 3;
  v45 = 3;
  v54[2] = 3;
  v54[1] = 1;
  if ( IsInterruptTypeSecondary )
  {
    v12 = 4;
    v54[3] = 0;
    v45 = 4;
  }
  Available = 0;
  v13 = 0LL;
  v42 = 0;
  do
  {
    v44 = 0;
    if ( v12 )
    {
      v14 = v54;
      v49 = v54;
LABEL_11:
      v15 = *v14;
      LOBYTE(v16) = 0;
      v10 = v51;
      v43 = 0;
LABEL_12:
      v17 = v40;
      v18 = 16;
      v19 = (unsigned __int8)v46 & (unsigned __int8)(v16 + ProcessorVectorColumnBias + v9 - 1) & 0xF;
      while ( 1 )
      {
        v20 = ((_BYTE)v18 + (_BYTE)ProcessorVectorRowBias - 1) & 0xF;
        if ( ProcessorIdtRowPriority[v20] == v15 )
        {
          v21 = *v10;
          v22 = 0;
          for ( i = v17 + (v19 | (16 * v20)); v21; v21 &= ~(1LL << v28) )
          {
            if ( _bittest64(&v21, v22) )
            {
              v41.Group = *((_WORD *)v10 + 4);
              *(_WORD *)&v41.Number = v22;
              ProcNumber = v41;
              ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
              if ( ProcessorIndexFromNumber == -1 )
                return -1073741811;
              if ( ProcessorIndexFromNumber >= ProcessorInstanceCount )
                return -1073741811;
              v25 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
              if ( !v25 )
                return -1073741811;
              if ( v42 == 1 )
              {
                Callback = (BOOLEAN (__stdcall *)(PVOID, struct _RTL_RANGE *))ProcessorpRangeConflictCallback;
                *(_QWORD *)&Context = v52;
                DWORD2(Context) = a6;
                WORD6(Context) = (a7 & 1) != 0;
                BYTE14(Context) = v38;
              }
              else
              {
                Callback = 0LL;
                Context = 0uLL;
              }
              if ( a8 == 1 )
                ++v25;
              result = RtlIsRangeAvailable(v25, i, i + a5 - 1LL, 0, 0, &Context, Callback, &Available);
              if ( result < 0 )
                return result;
              if ( !Available )
                goto LABEL_14;
            }
            v28 = v22++;
          }
          if ( Available )
          {
            v29 = a6;
            v30 = a5;
            v39[0] = 0;
            if ( a6 >= 0xFFF00000 || (v31 = i, i >= i + a5) )
            {
LABEL_36:
              if ( v53 )
                *v53 = i;
              v32 = "edge";
              if ( (a7 & 1) == 0 )
                v32 = "level";
              v33 = "share";
              if ( !v38 )
                v33 = "noshare";
              WPP_RECORDER_SF_DDqDss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                (__int64)v32,
                (__int64)v33,
                v13,
                AttributeAvailableMask,
                i,
                i + v30 - 1,
                *v10,
                v29,
                v33,
                v32);
              return v50;
            }
            while ( (int)IcCheckIrqConflict(v29, v31, a7, v39) >= 0 )
            {
              v29 = a6;
              if ( ++v31 >= i + a5 )
              {
                if ( v39[0] )
                  break;
                v30 = a5;
                goto LABEL_36;
              }
            }
          }
        }
LABEL_14:
        v17 = v40;
        if ( !--v18 )
        {
          v9 = a5;
          v16 = a5 + v43;
          v43 = v16;
          if ( v16 < 0x10 )
            goto LABEL_12;
          v12 = v45;
          v14 = v49 + 1;
          ++v44;
          ++v49;
          if ( v44 >= v45 )
          {
            LODWORD(v13) = v42;
            break;
          }
          goto LABEL_11;
        }
      }
    }
    v13 = (unsigned int)(v13 + 1);
    v42 = v13;
  }
  while ( (int)v13 <= 1 );
  LODWORD(v50) = -1073741275;
  v34 = "edge";
  if ( (a7 & 1) == 0 )
    v34 = "level";
  v35 = "share";
  if ( !v38 )
    v35 = "noshare";
  WPP_RECORDER_SF_qDss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v34,
    (_DWORD)v35,
    v13,
    AttributeAvailableMask,
    *v10,
    a6,
    (__int64)v35,
    (__int64)v34);
  return v50;
}
