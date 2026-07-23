/*
 * XREFs of LocalGetAceCondition @ 0x1406CB600
 * Callers:
 *     LocalConvertAclToString @ 0x1406CA4C0 (LocalConvertAclToString.c)
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     LocalGetStringForRelativeAttribute @ 0x1406CF550 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1406CFDC0 (LocalpGetStringForCondition.c)
 */

__int64 __fastcall LocalGetAceCondition(
        unsigned __int8 *a1,
        void *a2,
        _QWORD *a3,
        ULONG *a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned __int8 v9; // si
  unsigned int v14; // ebp
  int v15; // ecx
  int v16; // edi
  int v17; // ebx
  ULONG v18; // ecx
  ULONG v19; // ebx
  ULONG v20; // ecx
  int v21; // r9d
  unsigned int StringForRelativeAttribute; // eax
  __int64 v23; // rax

  v9 = *a1;
  *a3 = 0LL;
  *a4 = 0;
  v14 = 0;
  if ( v9 <= 0x12u )
  {
    v15 = 273920;
    if ( _bittest(&v15, v9) )
    {
      if ( v9 == 11 )
      {
        v16 = 16 * (*((_DWORD *)a1 + 2) & 1);
        v17 = 8 * (*((_DWORD *)a1 + 2) & 2);
        v18 = *((unsigned __int16 *)a1 + 1) - v16 - v17 - RtlLengthSid(a2) - 12;
      }
      else
      {
        v18 = *((unsigned __int16 *)a1 + 1) - RtlLengthSid(a2) - 8;
      }
      *a4 = v18;
      v19 = v18;
      if ( v18 )
      {
        v20 = (_DWORD)a2 + RtlLengthSid(a2);
        if ( v9 == 18 )
          StringForRelativeAttribute = LocalGetStringForRelativeAttribute(v20, v19, a6, v21);
        else
          StringForRelativeAttribute = LocalpGetStringForCondition(v20, v19, (_DWORD)a3, v21, a6, a7, a8, a9);
        v14 = StringForRelativeAttribute;
        if ( !StringForRelativeAttribute )
        {
          v23 = -1LL;
          do
            ++v23;
          while ( *(_WORD *)(*a3 + 2 * v23) );
          *a5 += 2 * v23 + 2;
        }
      }
    }
  }
  return v14;
}
