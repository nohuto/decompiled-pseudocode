/*
 * XREFs of RIMIDEAdoptOrphanedRimDevs @ 0x1C0072C84
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C0072410 (RIMRegisterForInputWithCallbacks.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMFindAndRemoveHoldingFrame @ 0x1C0078018 (RIMFindAndRemoveHoldingFrame.c)
 */

_QWORD *__fastcall RIMIDEAdoptOrphanedRimDevs(_DWORD *Object)
{
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *v3; // r8
  struct _LIST_ENTRY *v4; // rcx
  _QWORD *v5; // r14
  _QWORD *result; // rax
  int v7; // r9d
  int Blink; // r10d
  struct _LIST_ENTRY **p_Blink; // rcx
  _QWORD *v10; // rdi
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // [rsp+20h] [rbp-18h] BYREF
  struct _LIST_ENTRY **v19; // [rsp+28h] [rbp-10h]

  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimDevList.Flink;
  v3 = (struct _LIST_ENTRY *)&v18;
  v19 = (struct _LIST_ENTRY **)&v18;
  v18 = &v18;
  while ( Flink != &gObRimDevList )
  {
    if ( Flink == (struct _LIST_ENTRY *)16 )
      v4 = 0LL;
    else
      v4 = Flink + 3;
    if ( BYTE1(v4[21].Blink[4].Blink) && ((__int64)v4[11].Blink & 0x800) != 0 )
    {
      v7 = 16;
      Blink = (int)v4[26].Flink[1].Blink;
      if ( (unsigned int)(Blink - 6) > 1 )
      {
        if ( Blink == 8 )
        {
          v7 = 8;
        }
        else if ( (unsigned int)(Blink - 1) > 4 )
        {
          goto LABEL_6;
        }
      }
      else
      {
        v7 = 4;
      }
      if ( (v7 & Object[19]) != 0 )
      {
        p_Blink = &v4[8].Blink;
        *p_Blink = (struct _LIST_ENTRY *)&v18;
        p_Blink[1] = v3;
        if ( v3->Flink != (struct _LIST_ENTRY *)&v18 )
          __fastfail(3u);
        v3->Flink = (struct _LIST_ENTRY *)p_Blink;
        v3 = (struct _LIST_ENTRY *)p_Blink;
        v19 = p_Blink;
      }
    }
LABEL_6:
    Flink = Flink->Flink;
  }
  RIMUnlockExclusive((__int64)&gObListLock);
  v5 = v18;
  while ( 1 )
  {
    result = &v18;
    if ( v5 == &v18 )
      return result;
    v10 = v5 - 17;
    v11 = (_QWORD *)v5[26];
    RIMLockExclusive((__int64)(v11 + 12));
    v5 = (_QWORD *)*v5;
    v12 = v10 + 17;
    v13 = v10[17];
    v14 = (_QWORD *)v10[18];
    if ( *(_QWORD **)(v13 + 8) != v10 + 17 || (_QWORD *)*v14 != v12 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    v15 = v11 + 64;
    v10[18] = v10 + 17;
    *v12 = v12;
    while ( *v15 )
    {
      if ( (_QWORD *)*v15 == v10 )
      {
        *v15 = v10[5];
        break;
      }
      v15 = (_QWORD *)(*v15 + 40LL);
    }
    if ( (*((_DWORD *)v10 + 46) & 0x80u) != 0 )
    {
      v16 = v10[15];
      v17 = (_QWORD *)v10[16];
      if ( *(_QWORD **)(v16 + 8) != v10 + 15 || (_QWORD *)*v17 != v10 + 15 )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      *((_DWORD *)v10 + 46) &= ~0x80u;
    }
    RIMFindAndRemoveHoldingFrame(v11, v10);
    RIMUnlockExclusive((__int64)(v11 + 12));
    ObfDereferenceObject(v11);
    RIMLockExclusive((__int64)(Object + 24));
    ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1);
    v10[43] = Object;
    v10[5] = *((_QWORD *)Object + 64);
    *((_QWORD *)Object + 64) = v10;
    *((_DWORD *)v10 + 50) |= 4u;
    RIMUnlockExclusive((__int64)(Object + 24));
  }
}
