/*
 * XREFs of PspCallProcessNotifyRoutines @ 0x140427CF4
 * Callers:
 *     PspExitProcess @ 0x14045F434 (PspExitProcess.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140013AC0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140013B00 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x140013BB4 (ExGetCallBackBlockRoutine.c)
 *     ExGetCallBackBlockContext @ 0x140013D04 (ExGetCallBackBlockContext.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     PsReferenceProcessFilePointer @ 0x14046DE90 (PsReferenceProcessFilePointer.c)
 *     PsTerminateProcess @ 0x1404CE4F8 (PsTerminateProcess.c)
 */

__int64 __fastcall PspCallProcessNotifyRoutines(_QWORD *a1, __int64 a2, char a3)
{
  unsigned int v3; // r14d
  bool v6; // si
  unsigned int v7; // r12d
  bool v8; // cl
  signed __int64 *v9; // rdi
  unsigned int v10; // eax
  __int128 v11; // xmm0
  signed __int64 *v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rbx
  struct _EX_RUNDOWN_REF *v15; // rax
  struct _EX_RUNDOWN_REF *v16; // r15
  char v18; // al
  __int64 v19; // rcx
  void (__fastcall *v20)(_QWORD, _QWORD, __int64); // rax
  __int64 v21; // r8
  void (__fastcall *v22)(_QWORD *, _QWORD, __int64 *); // rax
  signed __int64 *v23; // [rsp+20h] [rbp-60h] BYREF
  __int64 v24; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-48h]
  __int64 v26; // [rsp+40h] [rbp-40h]
  __int128 v27; // [rsp+48h] [rbp-38h]
  signed __int64 *v28; // [rsp+58h] [rbp-28h]
  __int128 v29; // [rsp+60h] [rbp-20h]
  int v30; // [rsp+70h] [rbp-10h]
  char v31; // [rsp+C0h] [rbp+40h]
  bool v33; // [rsp+D8h] [rbp+58h]

  v3 = 0;
  v6 = (PspNotifyEnableMask & 4) != 0;
  v7 = 0;
  v8 = a1[226] != 0LL;
  v33 = v8;
  if ( (PspNotifyEnableMask & 2) != 0 || (PspNotifyEnableMask & 4) != 0 )
  {
    v23 = 0LL;
    v9 = 0LL;
    v31 = 0;
    if ( a3 && (PspNotifyEnableMask & 4) != 0 )
    {
      v10 = 0;
      v24 = 72LL;
      if ( v8 )
        v10 = 0x80000000;
      v25 = v10;
      v26 = a1[124];
      v11 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
      v30 = 0;
      v27 = v11;
      if ( v8 )
      {
        v9 = v23;
        v29 = 0LL;
        v28 = 0LL;
      }
      else
      {
        if ( !a2 || (v9 = *(signed __int64 **)(a2 + 168)) == 0LL )
        {
          v31 = 1;
          PsReferenceProcessFilePointer(a1, &v23);
          v9 = v23;
        }
        v28 = v9;
        if ( a2 && (*(_DWORD *)(a2 + 4) & 0x20) != 0 )
        {
          v25 |= 1u;
          v12 = (signed __int64 *)(a2 + 224);
        }
        else
        {
          v12 = v9 + 11;
        }
        *(_QWORD *)&v29 = v12;
        if ( a2 && (v13 = *(_QWORD *)(a2 + 200)) != 0 )
          *((_QWORD *)&v29 + 1) = v13 + 112;
        else
          *((_QWORD *)&v29 + 1) = 0LL;
      }
      v14 = &v24;
    }
    else
    {
      v14 = 0LL;
    }
    while ( 1 )
    {
      v23 = (signed __int64 *)(&PspCreateProcessNotifyRoutine.Ptr + v3);
      v15 = ExReferenceCallBackBlock(v23);
      v16 = v15;
      if ( v15 )
      {
        v18 = ExGetCallBackBlockContext((__int64)v15);
        if ( !v33 || (v18 & 4) != 0 )
        {
          if ( (v18 & 2) != 0 )
          {
            if ( v6 )
            {
              v22 = (void (__fastcall *)(_QWORD *, _QWORD, __int64 *))ExGetCallBackBlockRoutine(v19);
              v22(a1, a1[93], v14);
            }
          }
          else
          {
            v20 = (void (__fastcall *)(_QWORD, _QWORD, __int64))ExGetCallBackBlockRoutine(v19);
            LOBYTE(v21) = a3;
            v20(a1[124], a1[93], v21);
          }
        }
        ExDereferenceCallBackBlock(v23, v16);
        if ( v14 )
        {
          if ( *((int *)v14 + 16) < 0 )
            break;
        }
      }
      if ( ++v3 >= 0x40 )
        goto LABEL_18;
    }
    v7 = *((_DWORD *)v14 + 16);
    PsTerminateProcess(a1, v7);
LABEL_18:
    if ( v31 )
      ObfDereferenceObject(v9);
  }
  return v7;
}
