/*
 * XREFs of WmipFindMRByNames @ 0x1405513B8
 * Callers:
 *     WmipAddMofResource @ 0x140551180 (WmipAddMofResource.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     WmipReferenceEntry @ 0x140473870 (WmipReferenceEntry.c)
 */

_QWORD *__fastcall WmipFindMRByNames(__int64 a1, __int64 a2)
{
  _QWORD *i; // rbx
  unsigned __int16 *v5; // rax
  __int64 v6; // rdx
  int v7; // r8d
  int v8; // ecx
  unsigned __int16 *v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  int v13; // ecx

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD **)WmipMRHeadPtr; ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)WmipMRHeadPtr )
    {
      i = 0LL;
      goto LABEL_9;
    }
    v5 = (unsigned __int16 *)i[5];
    v6 = a1 - (_QWORD)v5;
    do
    {
      v7 = *(unsigned __int16 *)((char *)v5 + v6);
      v8 = *v5 - v7;
      if ( v8 )
        break;
      ++v5;
    }
    while ( v7 );
    if ( !v8 )
    {
      v10 = (unsigned __int16 *)i[6];
      v11 = a2 - (_QWORD)v10;
      do
      {
        v12 = *(unsigned __int16 *)((char *)v10 + v11);
        v13 = *v10 - v12;
        if ( v13 )
          break;
        ++v10;
      }
      while ( v12 );
      if ( !v13 )
        break;
    }
  }
  WmipReferenceEntry((ULONG_PTR)i);
LABEL_9:
  KeReleaseMutex(&WmipSMMutex, 0);
  return i;
}
