/*
 * XREFs of PiDqQuerySerializeActionQueue @ 0x14048BEF8
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x14048ADF8 (PiDqIrpQueryGetResult.c)
 *     PiDqIrpQueryCreate @ 0x14048B94C (PiDqIrpQueryCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048B010 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryUnlock @ 0x14048C1B0 (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x14048C208 (PiDqQueryLock.c)
 *     PiDqQueryActionQueueEntryFree @ 0x14048C268 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataCreate @ 0x14048C2A4 (PiDqActionDataCreate.c)
 *     PiDqActionDataFree @ 0x14048C44C (PiDqActionDataFree.c)
 *     PiDqQueryGetObjectManager @ 0x14048CF6C (PiDqQueryGetObjectManager.c)
 */

__int64 __fastcall PiDqQuerySerializeActionQueue(KSPIN_LOCK a1, __int64 a2, int a3, int *a4, _DWORD *a5)
{
  int v7; // r14d
  int v8; // ebx
  struct _ERESOURCE *ObjectManager; // rax
  _QWORD **v10; // rax
  _QWORD **v11; // rbx
  _QWORD *v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+38h] [rbp-50h] BYREF
  int v16; // [rsp+40h] [rbp-48h]
  int v17; // [rsp+44h] [rbp-44h]
  PVOID P; // [rsp+48h] [rbp-40h]
  int v19; // [rsp+50h] [rbp-38h]
  __int16 v20; // [rsp+54h] [rbp-34h]
  __int64 v21; // [rsp+98h] [rbp+10h] BYREF
  int *v22; // [rsp+A8h] [rbp+20h]

  v22 = a4;
  v7 = 0;
  v14 = 0LL;
  v21 = 0LL;
  v15 = a2;
  v16 = a3;
  v17 = 16;
  P = 0LL;
  v19 = 0;
  v20 = 0;
  PiDqQueryLock(a1);
  v8 = *(unsigned __int8 *)(a1 + 216) >> 5;
  PiDqQueryUnlock(a1);
  if ( (v8 & 1) == 0 )
  {
    ObjectManager = (struct _ERESOURCE *)PiDqQueryGetObjectManager(a1);
    v7 = PiDqObjectManagerEnumerateAndRegisterQuery(ObjectManager, a1);
  }
  if ( v7 < 0 )
  {
LABEL_31:
    *a4 = 0;
    *a5 = 0;
  }
  else
  {
    v7 = MesEncodeIncrementalHandleCreate(&v15, PiDqSerializationAlloc, &PiDqSerializationWrite, &v14);
    if ( v7 >= 0 )
    {
      v7 = MesIncrementalHandleReset(v14, &v15, 0LL, 0LL, 0LL, *(_BYTE *)(a1 + 216) & 2);
      if ( v7 >= 0 )
      {
        *a4 = v17;
        *a5 = 0;
        PiDqQueryLock(a1);
        v21 = *(_QWORD *)(a1 + 184);
        *(_QWORD *)(a1 + 184) = 0LL;
        PiDqQueryUnlock(a1);
        do
        {
          if ( v21 )
          {
            NdrMesTypeEncode3(v14, "TP 3\a", &off_140257550, &off_1402F32A0, 1, &v21);
            if ( HIBYTE(v20) )
            {
              v7 = -1073741819;
              goto LABEL_31;
            }
            if ( (_BYTE)v20 )
            {
              PiDqQueryLock(a1);
              *(_QWORD *)(a1 + 184) = v21;
              v21 = 0LL;
              PiDqQueryUnlock(a1);
              *a5 = v19 + 16;
              break;
            }
            *a4 = v17;
            PiDqActionDataFree(v21);
            v21 = 0LL;
          }
          PiDqQueryLock(a1);
          v10 = (_QWORD **)(a1 + 192);
          if ( *v10 == v10 )
          {
            PiDqQueryUnlock(a1);
            break;
          }
          v11 = (_QWORD **)*v10;
          v12 = (_QWORD *)**v10;
          if ( (_QWORD **)(*v10)[1] != v10 || (_QWORD **)v12[1] != v11 )
            __fastfail(3u);
          *v10 = v12;
          v12[1] = v10;
          --*(_DWORD *)(a1 + 208);
          PiDqQueryUnlock(a1);
          v7 = PiDqActionDataCreate(*(_QWORD *)(a1 + 24), a1 + 32, v11, &v21);
          PiDqQueryActionQueueEntryFree(v11);
          if ( v7 == -1073741772 )
            v7 = 0;
        }
        while ( v7 >= 0 );
      }
    }
    if ( v7 < 0 )
      goto LABEL_31;
  }
  if ( v21 )
    PiDqActionDataFree(v21);
  if ( P )
    ExFreePoolWithTag(P, 0x58706E50u);
  if ( v14 )
    MesHandleFree();
  return (unsigned int)v7;
}
