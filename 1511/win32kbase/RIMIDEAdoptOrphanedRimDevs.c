/*
 * XREFs of RIMIDEAdoptOrphanedRimDevs @ 0x1C0006FA0
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00065F0 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     RIMFindAndRemoveHoldingFrame @ 0x1C007B7DC (RIMFindAndRemoveHoldingFrame.c)
 */

_QWORD *__fastcall RIMIDEAdoptOrphanedRimDevs(PVOID **Object)
{
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v3; // r9
  struct _LIST_ENTRY *v4; // rcx
  char v5; // al
  int v6; // r8d
  int Blink; // r10d
  struct _LIST_ENTRY *v8; // rcx
  _QWORD *v9; // rsi
  _QWORD *result; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rbp
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // r8
  _QWORD *v21; // rdx
  bool v22; // zf
  PVOID *v23; // r8
  _QWORD *v24; // rax
  _QWORD *v25; // [rsp+20h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v26; // [rsp+28h] [rbp-20h]

  RIMLockExclusive(&gObListLock);
  Flink = gObRimDevList.Flink;
  v3 = (struct _LIST_ENTRY *)&v25;
  v26 = (struct _LIST_ENTRY *)&v25;
  v25 = &v25;
  while ( Flink != &gObRimDevList )
  {
    if ( Flink == (struct _LIST_ENTRY *)16 )
      v4 = 0LL;
    else
      v4 = Flink + 3;
    if ( BYTE1(v4[21].Flink[4].Blink) && ((__int64)v4[11].Flink & 0x800) != 0 )
    {
      v5 = (char)v4[3].Flink;
      v6 = 16;
      if ( v5 )
      {
        if ( v5 == 1 )
        {
          v6 = 2;
        }
        else
        {
          if ( v5 != 2 )
            goto LABEL_21;
          Blink = (int)v4[26].Flink[1].Blink;
          if ( (unsigned int)(Blink - 6) > 1 )
          {
            if ( Blink == 8 )
            {
              v6 = 8;
            }
            else if ( (unsigned int)(Blink - 1) > 4 )
            {
              goto LABEL_21;
            }
          }
          else
          {
            v6 = 4;
          }
        }
      }
      else
      {
        v6 = 1;
      }
      if ( (v6 & *((_DWORD *)Object + 19)) != 0 )
      {
        v8 = v4 + 8;
        v8->Flink = (struct _LIST_ENTRY *)&v25;
        v8->Blink = v3;
        if ( v3->Flink != (struct _LIST_ENTRY *)&v25 )
          __fastfail(3u);
        v3->Flink = v8;
        v3 = v8;
        v26 = v8;
      }
    }
LABEL_21:
    Flink = Flink->Flink;
  }
  RIMUnlockExclusive(&gObListLock);
  v9 = v25;
  for ( result = &v25; v9 != &v25; result = &v25 )
  {
    v11 = v9 - 16;
    v12 = (_QWORD *)v9[26];
    RIMLockExclusive(v12 + 12);
    v9 = (_QWORD *)*v9;
    v13 = v11 + 16;
    v14 = v11[16];
    v15 = (_QWORD *)v11[17];
    if ( *(_QWORD **)(v14 + 8) != v11 + 16 || (_QWORD *)*v15 != v13 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    v16 = v12 + 68;
    v11[17] = v11 + 16;
    *v13 = v13;
    while ( *v16 )
    {
      if ( (_QWORD *)*v16 == v11 )
      {
        *v16 = v11[5];
        break;
      }
      v16 = (_QWORD *)(*v16 + 40LL);
    }
    if ( (*((_DWORD *)v11 + 44) & 0x80u) != 0 )
    {
      v17 = v11[14];
      v18 = (_QWORD *)v11[15];
      if ( *(_QWORD **)(v17 + 8) != v11 + 14 || (_QWORD *)*v18 != v11 + 14 )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      *((_DWORD *)v11 + 44) &= ~0x80u;
    }
    if ( *((_DWORD *)v11 + 77) )
    {
      v19 = (_QWORD *)(v11[52] + 1520LL);
      v20 = *v19;
      v21 = *(_QWORD **)(v11[52] + 1528LL);
      if ( *(_QWORD **)(*v19 + 8LL) != v19 || (_QWORD *)*v21 != v19 )
        __fastfail(3u);
      *v21 = v20;
      *(_QWORD *)(v20 + 8) = v21;
      v19[1] = v19;
      *v19 = v19;
    }
    RIMFindAndRemoveHoldingFrame(v12, v11);
    RIMUnlockExclusive(v12 + 12);
    ObfDereferenceObject(v12);
    RIMLockExclusive(Object + 12);
    ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1);
    v11[42] = Object;
    v11[5] = Object[68];
    v11[42] = Object;
    v22 = Object[101] == 0LL;
    Object[68] = (PVOID *)v11;
    if ( !v22 )
      *((_DWORD *)v11 + 44) = v11[22] & 0xFFE07FFF | 0x8000;
    *((_DWORD *)v11 + 48) |= 4u;
    if ( *((_DWORD *)v11 + 77) )
    {
      v23 = Object[70];
      v24 = (_QWORD *)(v11[52] + 1520LL);
      *v24 = Object + 69;
      v24[1] = v23;
      if ( *v23 != Object + 69 )
        __fastfail(3u);
      *v23 = v24;
      Object[70] = (PVOID *)v24;
    }
    RIMUnlockExclusive(Object + 12);
  }
  return result;
}
