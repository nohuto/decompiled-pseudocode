/*
 * XREFs of PspCreatePicoThread @ 0x140681894
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 *     PspInsertThread @ 0x1404F9B40 (PspInsertThread.c)
 */

__int64 __fastcall PspCreatePicoThread(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r12
  char v7; // bl
  PVOID v8; // rdi
  int inserted; // esi
  _QWORD *v10; // r15
  __int64 v12; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  PVOID v14; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+78h] [rbp-88h] BYREF
  __int64 v16[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v17[154]; // [rsp+A0h] [rbp-60h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+570h] [rbp+470h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v14 = 0LL;
  Object = 0LL;
  if ( *(_QWORD *)(a1 + 184) )
  {
    inserted = ObReferenceObjectByHandleWithTag(
                 *(HANDLE *)a1,
                 2u,
                 (POBJECT_TYPE)PsProcessType,
                 0,
                 0x72437350u,
                 &Object,
                 0LL);
    if ( inserted >= 0 )
    {
      v8 = Object;
      if ( *((_QWORD *)Object + 226) )
      {
        --CurrentThread->KernelApcDisable;
        v7 = 1;
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v8 + 92) )
        {
          v7 = 3;
          ObfReferenceObjectWithTag(v8, 0x72437350u);
          memset(v17, 0, sizeof(v17));
          v17[31] = *(_QWORD *)(a1 + 16);
          v17[16] = *(_QWORD *)(a1 + 24);
          v17[17] = *(_QWORD *)(a1 + 32);
          WORD1(v17[8]) = 43;
          LOWORD(v17[7]) = 51;
          LOWORD(v17[32]) = 639;
          v17[19] = *(_QWORD *)(a1 + 8);
          HIWORD(v17[7]) = *(_WORD *)(a1 + 56);
          LOWORD(v17[8]) = *(_WORD *)(a1 + 58);
          v16[1] = *(_QWORD *)(a1 + 40);
          v16[2] = *(_QWORD *)(a1 + 48);
          v17[15] = *(_QWORD *)(a1 + 64);
          v17[18] = *(_QWORD *)(a1 + 72);
          v17[22] = *(_QWORD *)(a1 + 96);
          v17[21] = *(_QWORD *)(a1 + 104);
          v17[20] = *(_QWORD *)(a1 + 112);
          v17[23] = *(_QWORD *)(a1 + 120);
          v17[24] = *(_QWORD *)(a1 + 128);
          v17[25] = *(_QWORD *)(a1 + 136);
          v17[26] = *(_QWORD *)(a1 + 144);
          v17[27] = *(_QWORD *)(a1 + 152);
          v17[28] = *(_QWORD *)(a1 + 160);
          v17[29] = *(_QWORD *)(a1 + 168);
          v17[30] = *(_QWORD *)(a1 + 176);
          LODWORD(v17[35]) = 8064;
          v17[6] = 0x1F800010000BLL;
          *(_DWORD *)((char *)&v17[7] + 2) = 2818091;
          LODWORD(v12) = 1;
          v16[0] = 0LL;
          inserted = PspAllocateThread(
                       (struct _KPROCESS *)v8,
                       0LL,
                       0,
                       0LL,
                       (__int64)v17,
                       v16,
                       0LL,
                       0LL,
                       (int *)&v12,
                       &v14,
                       0LL,
                       &AccessState);
          if ( inserted >= 0 )
          {
            v10 = v14;
            inserted = PspInsertThread(
                         (char *)v14,
                         (ULONG_PTR)v8,
                         0LL,
                         &v12,
                         0x1FFFFFu,
                         0LL,
                         0LL,
                         0LL,
                         (struct _SECURITY_SUBJECT_CONTEXT *)&AccessState,
                         &v15,
                         0LL);
            if ( inserted >= 0 )
            {
              inserted = 0;
              v10[242] = *(_QWORD *)(a1 + 184);
              *a2 = v15;
            }
            if ( v10 )
              ObfDereferenceObject(v10);
          }
        }
        else
        {
          inserted = -1073741558;
        }
      }
      else
      {
        inserted = -1073741816;
      }
    }
    else
    {
      v8 = 0LL;
    }
  }
  else
  {
    v8 = Object;
    inserted = -1073741811;
  }
  if ( (v7 & 2) != 0 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)v8 + 92);
  if ( (v7 & 1) != 0 )
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, (__int64)a2, a3, a4);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x72437350u);
  return (unsigned int)inserted;
}
