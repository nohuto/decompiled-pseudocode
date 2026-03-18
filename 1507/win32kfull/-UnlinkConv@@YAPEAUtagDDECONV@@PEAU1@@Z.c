/*
 * XREFs of ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01EAA28
 * Callers:
 *     xxxDDETrackWindowDying @ 0x1C01EC184 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C01EC2D4 (xxxFreeDdeConv.c)
 * Callees:
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     InternalSetProp @ 0x1C0081908 (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C008748C (InternalRemoveProp.c)
 *     HMUnlockObject @ 0x1C00DF9F0 (HMUnlockObject.c)
 */

struct tagDDECONV *__fastcall UnlinkConv(struct tagDDECONV *a1)
{
  __int64 v2; // rcx
  __int64 Prop; // rax
  __int64 v5; // rcx
  __int64 v6; // r10
  int v7; // r11d
  __int64 v8; // rdx
  char *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rbx

  *((_DWORD *)a1 + 20) |= 0x1000u;
  v2 = *((_QWORD *)a1 + 5);
  if ( !v2 )
    return 0LL;
  Prop = GetProp(v2, (unsigned __int16)atomDDETrack, 1LL);
  if ( !Prop )
    return 0LL;
  if ( (struct tagDDECONV *)Prop != a1 )
  {
    while ( 1 )
    {
      v8 = Prop;
      Prop = *(_QWORD *)(Prop + 24);
      if ( !Prop )
        return 0LL;
      if ( (struct tagDDECONV *)Prop == a1 )
      {
        v9 = (char *)a1 + 24;
        HMAssignmentLock(v8 + 24, *((_QWORD *)a1 + 3));
        goto LABEL_11;
      }
    }
  }
  v9 = (char *)a1 + 24;
  v10 = *((_QWORD *)a1 + 3);
  if ( v10 )
    InternalSetProp(v5, v6, v10, v7);
  else
    InternalRemoveProp(v5, v6, v7);
LABEL_11:
  v11 = HMAssignmentUnlock(v9);
  HMUnlockObject((__int64)a1);
  return (struct tagDDECONV *)v11;
}
