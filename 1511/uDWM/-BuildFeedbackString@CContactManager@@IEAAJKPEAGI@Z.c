/*
 * XREFs of ?BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z @ 0x18008564C
 * Callers:
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180085D38 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180087B84 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CContactManager::BuildFeedbackString(
        const unsigned __int16 **this,
        char a2,
        unsigned __int16 *a3,
        unsigned int a4)
{
  unsigned __int64 v4; // rbp
  int v8; // r10d
  char v9; // di
  const unsigned __int16 *v10; // r8
  const unsigned __int16 *v11; // r8
  const unsigned __int16 *v12; // r8
  const unsigned __int16 *v13; // r8
  const unsigned __int16 *v14; // r8
  const unsigned __int16 *v15; // r8
  const unsigned __int16 *v16; // r8
  const unsigned __int16 *v17; // r8

  v4 = a4;
  *a3 = 0;
  v8 = 0;
  v9 = 0;
  if ( *this )
  {
    if ( (a2 & 0x12) == 2 )
    {
      v8 = StringCchCatW(a3, a4, *this);
      v9 = 1;
      if ( v8 < 0 )
        return (unsigned int)v8;
    }
  }
  if ( (a2 & 4) != 0 )
  {
    if ( v9 )
    {
      v10 = this[5];
      if ( v10 )
        v8 = StringCchCatW(a3, v4, v10);
    }
    if ( v8 < 0 )
      return (unsigned int)v8;
    v11 = this[2];
    if ( v11 )
    {
      v8 = StringCchCatW(a3, v4, v11);
      v9 = 1;
    }
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( (a2 & 1) != 0 )
  {
    if ( v9 )
    {
      v12 = this[5];
      if ( v12 )
        v8 = StringCchCatW(a3, v4, v12);
    }
    if ( v8 < 0 )
      return (unsigned int)v8;
    v13 = this[1];
    if ( v13 )
    {
      v8 = StringCchCatW(a3, v4, v13);
      v9 = 1;
    }
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( (a2 & 8) == 0 )
    goto LABEL_27;
  if ( v9 )
  {
    v14 = this[5];
    if ( v14 )
      v8 = StringCchCatW(a3, v4, v14);
  }
  if ( v8 >= 0 )
  {
    v15 = this[3];
    if ( v15 )
    {
      v8 = StringCchCatW(a3, v4, v15);
      v9 = 1;
    }
LABEL_27:
    if ( v8 >= 0 && (a2 & 0x10) != 0 )
    {
      if ( v9 )
      {
        v16 = this[5];
        if ( v16 )
          v8 = StringCchCatW(a3, v4, v16);
      }
      if ( v8 >= 0 )
      {
        v17 = this[4];
        if ( v17 )
          return (unsigned int)StringCchCatW(a3, v4, v17);
      }
    }
  }
  return (unsigned int)v8;
}
