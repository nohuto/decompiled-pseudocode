/*
 * XREFs of ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C005D1F0
 * Callers:
 *     hCreateSolidBrushInternal @ 0x1C005D0C0 (hCreateSolidBrushInternal.c)
 *     bInitBrush @ 0x1C013A910 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C013A9B0 (bInitBRUSHOBJ.c)
 * Callees:
 *     FreeObject @ 0x1C0022A50 (FreeObject.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0031F80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0031F98 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     HmgRemoveObject @ 0x1C0036F40 (HmgRemoveObject.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C005D124 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C005D650 (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x1C0074420 (HmgFreeObjectAttr.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00B2E1C (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00B2E2C (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(BRUSHMEMOBJ *this, int a2, unsigned int a3, int a4, int a5)
{
  struct BRUSH *v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  char v16; // r15
  _QWORD *ObjectAttr; // rdi
  _QWORD v19[3]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v21; // [rsp+50h] [rbp-48h] BYREF
  int v22; // [rsp+58h] [rbp-40h]
  int v23; // [rsp+64h] [rbp-34h]

  *((_DWORD *)this + 2) = 0;
  if ( a3 <= 0xC )
  {
    v8 = BRUSHMEMOBJ::pbrAllocBrush(this, a4);
    v9 = (__int64)v8;
    v19[1] = v8;
    *(_QWORD *)this = v8;
    if ( v8 )
    {
      *((_DWORD *)v8 + 21) = a2;
      *((_DWORD *)v8 + 6) = a3;
      *((_QWORD *)v8 + 4) = 0LL;
      **((_DWORD **)v8 + 7) = 0;
      if ( a3 >= 6 )
      {
        v10 = a3 - 6;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  v15 = v14 - 1;
                  if ( v15 )
                  {
                    if ( v15 == 1 )
                      *((_DWORD *)v8 + 12) = 256;
                  }
                  else
                  {
                    *((_DWORD *)v8 + 12) = 22;
                  }
                }
                else
                {
                  *((_DWORD *)v8 + 12) = 18;
                }
              }
              else
              {
                *((_DWORD *)v8 + 12) = 21;
              }
            }
            else
            {
              *((_DWORD *)v8 + 12) = 17;
            }
          }
          else
          {
            *((_DWORD *)v8 + 12) = 20;
          }
        }
        else
        {
          *((_DWORD *)v8 + 12) = 16;
        }
      }
      else
      {
        *((_DWORD *)v8 + 12) = 32802;
      }
      v16 = 0;
      v19[0] = 0LL;
      if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v19, v8, 1, 0, 0x10u) )
      {
        if ( a5 )
        {
          ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
          v19[2] = ObjectAttr;
          if ( ObjectAttr )
          {
            v22 = 0;
            v21 = 0LL;
            v23 = 0;
            HANDLELOCK::bLockHobj((HANDLELOCK *)&v21, *(struct HOBJ__ **)v9, 16);
            if ( HANDLELOCK::bValid((HANDLELOCK *)&v21) )
            {
              *ObjectAttr = *(_QWORD *)(v9 + 80);
              *(_QWORD *)(v21 + 16) = ObjectAttr;
              *(_QWORD *)(v9 + 56) = ObjectAttr;
              HANDLELOCK::vUnlock((HANDLELOCK *)&v21);
            }
            HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v21);
          }
        }
      }
      else
      {
        v16 = 1;
        *(_QWORD *)this = 0LL;
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v19);
      if ( v16 )
        FreeObject(v9);
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  return this;
}
