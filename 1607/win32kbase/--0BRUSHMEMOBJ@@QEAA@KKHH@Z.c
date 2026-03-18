/*
 * XREFs of ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C005B950
 * Callers:
 *     hCreateSolidBrushInternal @ 0x1C005B810 (hCreateSolidBrushInternal.c)
 *     bInitBrush @ 0x1C0155DCC (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0155E74 (bInitBRUSHOBJ.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0029F70 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C002A420 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002A438 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     FreeObject @ 0x1C00366E0 (FreeObject.c)
 *     HmgRemoveObject @ 0x1C0036A70 (HmgRemoveObject.c)
 *     HmgFreeObjectAttr @ 0x1C005AF54 (HmgFreeObjectAttr.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C005B87C (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     HmgAllocateObjectAttr @ 0x1C005BDE0 (HmgAllocateObjectAttr.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ @ 0x1C00BCEC0 (--0-$UnexpectedThreadTerminationHandler@VBRUSHMEMOBJ@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00BCF98 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00BCFD8 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C00BD0A8 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 */

BRUSHMEMOBJ *__fastcall BRUSHMEMOBJ::BRUSHMEMOBJ(BRUSHMEMOBJ *this, int a2, unsigned int a3, int a4, int a5)
{
  struct BRUSH *v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // edi
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  char v17; // r15
  _QWORD *ObjectAttr; // rdi
  __int64 v20; // [rsp+48h] [rbp-70h] BYREF
  int v21; // [rsp+50h] [rbp-68h]
  _BYTE v22[88]; // [rsp+60h] [rbp-58h] BYREF

  *((_DWORD *)this + 2) = 0;
  UnexpectedThreadTerminationHandler<BRUSHMEMOBJ>::UnexpectedThreadTerminationHandler<BRUSHMEMOBJ>((char *)this + 16);
  if ( a3 <= 0xC )
  {
    v9 = BRUSHMEMOBJ::pbrAllocBrush(this, a4);
    v10 = (__int64)v9;
    *(_QWORD *)this = v9;
    if ( v9 )
    {
      *((_DWORD *)v9 + 21) = a2;
      *((_DWORD *)v9 + 6) = a3;
      *((_QWORD *)v9 + 4) = 0LL;
      **((_DWORD **)v9 + 7) = 0;
      if ( a3 >= 6 )
      {
        v11 = a3 - 6;
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
                  v16 = v15 - 1;
                  if ( v16 )
                  {
                    if ( v16 == 1 )
                      *((_DWORD *)v9 + 12) = 256;
                  }
                  else
                  {
                    *((_DWORD *)v9 + 12) = 22;
                  }
                }
                else
                {
                  *((_DWORD *)v9 + 12) = 18;
                }
              }
              else
              {
                *((_DWORD *)v9 + 12) = 21;
              }
            }
            else
            {
              *((_DWORD *)v9 + 12) = 17;
            }
          }
          else
          {
            *((_DWORD *)v9 + 12) = 20;
          }
        }
        else
        {
          *((_DWORD *)v9 + 12) = 16;
        }
      }
      else
      {
        *((_DWORD *)v9 + 12) = 32802;
      }
      v17 = 0;
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v22);
      if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v22, (struct OBJECT *)v10, 1, 0, 0x10u) )
      {
        if ( a5 )
        {
          ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
          if ( ObjectAttr )
          {
            v20 = 0LL;
            v21 = 0;
            HANDLELOCK::bLockHobj((HANDLELOCK *)&v20, *(struct HOBJ__ **)v10, 16);
            if ( HANDLELOCK::bValid((HANDLELOCK *)&v20) )
            {
              *ObjectAttr = *(_QWORD *)(v10 + 80);
              *(_QWORD *)(v20 + 16) = ObjectAttr;
              *(_QWORD *)(v10 + 56) = ObjectAttr;
              HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
            }
            if ( v21 )
              HANDLELOCK::vUnlock((HANDLELOCK *)&v20);
          }
        }
      }
      else
      {
        v17 = 1;
        *(_QWORD *)this = 0LL;
      }
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v22);
      if ( v17 )
        FreeObject(v10);
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
  }
  return this;
}
