/*
 * XREFs of ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01EAF38
 * Callers:
 *     xxxDDETrackWindowDying @ 0x1C01EC6A8 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C01EC7F8 (xxxFreeDdeConv.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     InternalSetProp @ 0x1C0079054 (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C007FC50 (InternalRemoveProp.c)
 *     HMUnlockObject @ 0x1C009684C (HMUnlockObject.c)
 */

struct tagDDECONV *__fastcall UnlinkConv(struct tagDDECONV *a1)
{
  __int64 Prop; // rax
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rcx
  char *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rbx

  *((_DWORD *)a1 + 20) |= 0x1000u;
  if ( !*((_QWORD *)a1 + 5) )
    return 0LL;
  Prop = GetProp(*((_QWORD *)a1 + 5), (unsigned __int16)atomDDETrack, 1LL);
  if ( !Prop )
    return 0LL;
  if ( (struct tagDDECONV *)Prop != a1 )
  {
    while ( 1 )
    {
      v6 = Prop;
      Prop = *(_QWORD *)(Prop + 24);
      if ( !Prop )
        return 0LL;
      if ( (struct tagDDECONV *)Prop == a1 )
      {
        v7 = (char *)a1 + 24;
        HMAssignmentLock(v6 + 24, *((_QWORD *)a1 + 3));
        goto LABEL_11;
      }
    }
  }
  v7 = (char *)a1 + 24;
  v8 = *((_QWORD *)a1 + 3);
  if ( v8 )
    InternalSetProp(v4, v5, v8, 1);
  else
    InternalRemoveProp(v4, v5, 1);
LABEL_11:
  v9 = HMAssignmentUnlock(v7);
  HMUnlockObject((__int64)a1);
  return (struct tagDDECONV *)v9;
}
