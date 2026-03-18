/*
 * XREFs of NVMeSetIoQueueCountCompletion @ 0x1C000E410
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0004794 (GetSrbExtension.c)
 */

char __fastcall NVMeSetIoQueueCountCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _WORD *v3; // r8
  __int64 v4; // r9
  __int64 SrbExtension; // r10
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // ax

  SrbExtension = GetSrbExtension(a2);
  if ( !v3 || (LOBYTE(v6) = *(_BYTE *)(v2 + 3), (_BYTE)v6 == 14) )
  {
    v6 = *(_QWORD *)(v4 + 656);
    *(_QWORD *)(v6 + 4224) = 0LL;
  }
  else
  {
    if ( (_BYTE)v6 != 1 || *(_BYTE *)(v4 + 16) )
    {
      v9 = 1;
      v8 = 1;
    }
    else
    {
      v7 = *(_WORD *)(v4 + 200);
      v8 = 1;
      v9 = *(_WORD *)(v4 + 162);
      if ( v7 > 1u )
        v8 = v7 - 1;
      if ( (unsigned __int16)(*v3 + 1) < v9 )
        v9 = *v3 + 1;
      LOWORD(v6) = v3[1] + 1;
      if ( (unsigned __int16)v6 < v8 )
        v8 = v3[1] + 1;
    }
    if ( !*(_BYTE *)(v4 + 16) )
    {
      v10 = *(_WORD *)(v4 + 36);
      if ( v10 && v9 >= v10 )
        v9 = *(_WORD *)(v4 + 36);
      LOWORD(v6) = *(_WORD *)(v4 + 38);
      if ( (_WORD)v6 && v8 >= (unsigned __int16)v6 )
        v8 = *(_WORD *)(v4 + 38);
      if ( v8 > v9 )
        v8 = v9;
    }
    if ( *(_QWORD *)(SrbExtension + 4224) )
    {
      v11 = *(_WORD *)(v4 + 232);
      if ( v9 < v11 )
        v11 = v9;
      *(_WORD *)(v4 + 232) = v11;
      LOWORD(v6) = *(_WORD *)(v4 + 234);
      if ( v8 < (unsigned __int16)v6 )
        LOWORD(v6) = v8;
      *(_WORD *)(v4 + 234) = v6;
    }
    else
    {
      *(_WORD *)(v4 + 232) = v9;
      *(_WORD *)(v4 + 234) = v8;
    }
    *(_QWORD *)(SrbExtension + 4224) = 0LL;
  }
  *(_BYTE *)(SrbExtension + 4245) |= 8u;
  return v6;
}
