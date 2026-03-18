/*
 * XREFs of ProcessorpFindAffinitizedIdtEntries @ 0x1C006B600
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C006B430 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00235E0 (__security_check_cookie.c)
 *     IcIsInterruptTypeSecondary @ 0x1C006B8DC (IcIsInterruptTypeSecondary.c)
 *     IcCheckIrqConflict @ 0x1C006CCB0 (IcCheckIrqConflict.c)
 */

NTSTATUS __fastcall ProcessorpFindAffinitizedIdtEntries(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        unsigned int *a9)
{
  char v9; // si
  char IsInterruptTypeSecondary; // al
  int v11; // r13d
  int v12; // edx
  int v13; // ecx
  unsigned __int8 v14; // r15
  int i; // r8d
  int *v16; // rax
  int v17; // r12d
  unsigned int v18; // ecx
  int v19; // edi
  __int64 *v20; // r14
  int v21; // ecx
  __int64 v22; // rbx
  __int64 v23; // rsi
  unsigned __int8 v24; // r14
  unsigned int j; // ebx
  ULONG ProcessorIndexFromNumber; // eax
  struct _RTL_RANGE_LIST *v27; // rcx
  BOOLEAN (__stdcall *Callback)(PVOID, struct _RTL_RANGE *); // r9
  NTSTATUS result; // eax
  char v30; // al
  __int64 v31; // rcx
  unsigned int v32; // esi
  char v33; // [rsp+40h] [rbp-81h] BYREF
  unsigned __int8 Available; // [rsp+41h] [rbp-80h] BYREF
  char v35; // [rsp+42h] [rbp-7Fh]
  int v36; // [rsp+44h] [rbp-7Dh]
  int v37; // [rsp+48h] [rbp-79h]
  struct _PROCESSOR_NUMBER v38; // [rsp+4Ch] [rbp-75h]
  __int64 v39; // [rsp+50h] [rbp-71h]
  unsigned int v40; // [rsp+58h] [rbp-69h]
  unsigned int v41; // [rsp+5Ch] [rbp-65h]
  unsigned int v42; // [rsp+60h] [rbp-61h]
  int v43; // [rsp+64h] [rbp-5Dh]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+68h] [rbp-59h] BYREF
  __int128 Context; // [rsp+70h] [rbp-51h] BYREF
  int v46; // [rsp+80h] [rbp-41h]
  _DWORD *v47; // [rsp+88h] [rbp-39h]
  __int64 v48; // [rsp+90h] [rbp-31h]
  unsigned int *v49; // [rsp+98h] [rbp-29h]
  _DWORD v50[4]; // [rsp+A0h] [rbp-21h] BYREF

  v9 = a5;
  v49 = a9;
  v35 = a4;
  v39 = a2;
  v48 = a1;
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
  v11 = 0;
  v12 = 0;
  v36 = 0;
  if ( IsInterruptTypeSecondary )
  {
    v12 = 256;
    v36 = 256;
  }
  v50[0] = 2;
  v13 = 3;
  v40 = 3;
  v50[2] = 3;
  v50[1] = 1;
  if ( IsInterruptTypeSecondary )
  {
    v13 = 4;
    v50[3] = 0;
    v40 = 4;
  }
  v14 = 0;
  v37 = 0;
  Available = 0;
  for ( i = 0; i <= 1; v37 = i )
  {
    v41 = 0;
    if ( v13 )
    {
      v16 = v50;
      v47 = v50;
LABEL_11:
      v17 = *v16;
      LOBYTE(v18) = 0;
      v42 = 0;
LABEL_12:
      v19 = 16;
      v20 = (__int64 *)v39;
      v21 = (unsigned __int8)v46 & (unsigned __int8)(v9 + ProcessorVectorColumnBias - 1 + v18) & 0xF;
      v43 = v21;
      while ( 1 )
      {
        v22 = ((_BYTE)v19 + (_BYTE)ProcessorVectorRowBias - 1) & 0xF;
        if ( ProcessorIdtRowPriority[v22] == v17 )
        {
          v23 = *v20;
          v24 = 0;
          for ( j = v12 + (v21 | (16 * v22)); v23; v23 &= ~(1LL << v30) )
          {
            if ( _bittest64(&v23, v24) )
            {
              *(_WORD *)&v38.Number = v24;
              v38.Group = *(_WORD *)(v39 + 8);
              ProcNumber = v38;
              ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
              if ( ProcessorIndexFromNumber == -1 )
                return -1073741811;
              if ( ProcessorIndexFromNumber >= ProcessorInstanceCount )
                return -1073741811;
              v27 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + ProcessorIndexFromNumber);
              if ( !v27 )
                return -1073741811;
              if ( v37 == 1 )
              {
                Callback = (BOOLEAN (__stdcall *)(PVOID, struct _RTL_RANGE *))ProcessorpRangeConflictCallback;
                *(_QWORD *)&Context = v48;
                DWORD2(Context) = a6;
                WORD6(Context) = (a7 & 1) != 0;
                BYTE14(Context) = v35;
              }
              else
              {
                Callback = 0LL;
                Context = 0uLL;
              }
              if ( a8 == 1 )
                ++v27;
              result = RtlIsRangeAvailable(v27, j, j + a5 - 1LL, 0, 0, &Context, Callback, &Available);
              if ( result < 0 )
                return result;
              v14 = Available;
              if ( !Available )
                goto LABEL_28;
            }
            v30 = v24++;
          }
          if ( v14 )
          {
            v31 = a6;
            v33 = 0;
            if ( a6 >= 0xFFF00000 || (v32 = j, j >= j + a5) )
            {
LABEL_36:
              if ( v49 )
                *v49 = j;
              return v11;
            }
            while ( (int)IcCheckIrqConflict(v31, v32, a7, &v33) >= 0 )
            {
              v31 = a6;
              if ( ++v32 >= j + a5 )
              {
                if ( v33 )
                  break;
                goto LABEL_36;
              }
            }
          }
LABEL_28:
          v20 = (__int64 *)v39;
        }
        v21 = v43;
        v12 = v36;
        if ( !--v19 )
        {
          v9 = a5;
          v18 = a5 + v42;
          v42 = v18;
          if ( v18 < 0x10 )
            goto LABEL_12;
          v13 = v40;
          v16 = v47 + 1;
          ++v41;
          v12 = v36;
          ++v47;
          if ( v41 >= v40 )
          {
            i = v37;
            break;
          }
          goto LABEL_11;
        }
      }
    }
    ++i;
  }
  return -1073741275;
}
