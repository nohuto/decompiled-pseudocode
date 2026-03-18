/*
 * XREFs of ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x140319690
 * Callers:
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x14031808C (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x140318698 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E8CD4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401F2424 (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140288CE4 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x14031881C (-vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 *     ??0?$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z @ 0x140318F6C (--0-$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z.c)
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x140319098 (-bValid@EWNDOBJ@@QEBAHXZ.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x14031963C (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 */

void __fastcall vUpdateClientRgnOnSpriteOverlap(struct EWNDOBJ *a1, struct RGNOBJ *this)
{
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  REGION *v8; // rcx
  struct REGION *v9; // rdx
  HSEMAPHORE v10; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v12; // rax
  bool v13; // zf
  HSEMAPHORE v14; // rbx
  const wchar_t *v15; // rax
  struct _GRETHREAD *v16; // rax
  REGION *v17; // [rsp+20h] [rbp-30h] BYREF
  HSEMAPHORE v18; // [rsp+28h] [rbp-28h] BYREF
  HSEMAPHORE v19; // [rsp+30h] [rbp-20h] BYREF
  __int128 v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+20h] BYREF
  __int64 v22; // [rsp+78h] [rbp+28h] BYREF

  if ( EWNDOBJ::bValid(a1) && (*(_DWORD *)(v5 + 184) & 0x200) != 0 )
  {
    v17 = *(REGION **)(v5 + 56);
    v22 = *(_QWORD *)(v5 + 192);
    if ( v22 )
    {
      if ( *v4 )
      {
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
        if ( v21 )
        {
          if ( (unsigned int)RGNOBJ::iComplexity(this) == 1 )
          {
            RGNOBJ::bCopy((RGNOBJ *)&v21, (struct RGNOBJ *)&v22);
          }
          else if ( !RGNOBJ::bMerge((RGNOBJ *)&v21, this, (struct RGNOBJ *)&v22, 8u)
                 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v21) == 1
                 || (RGNOBJ::vSwap((RGNOBJ *)&v21, this),
                     !RGNOBJ::bMerge((RGNOBJ *)&v21, (struct RGNOBJ *)&v22, this, 4u))
                 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v21) == 1 )
          {
            RGNOBJ::vSet((RGNOBJ *)&v21);
            goto LABEL_24;
          }
          if ( !RGNOBJ::bEqual((RGNOBJ *)&v17, (struct RGNOBJ *)&v21) )
          {
            v7 = Gre::Base::Globals(v6);
            SEMOBJ<33>::SEMOBJ<33>(&v19, v7);
            SEMOBJ<34>::SEMOBJ<34>(&v18, (__int64)a1);
            RGNOBJ::vSwap((RGNOBJ *)&v21, (struct RGNOBJ *)&v17);
            v8 = v17;
            *((_QWORD *)a1 + 7) = v17;
            REGION::vStamp(v8);
            v9 = (struct REGION *)*((_QWORD *)a1 + 7);
            v20 = *((_OWORD *)a1 + 2);
            EWNDOBJ::vSetClip((__int64)a1, v9, &v20);
            TRACKOBJ::vUpdateDrv(*((TRACKOBJ **)a1 + 21), a1, 0x200u);
            v10 = v18;
            if ( v18 )
            {
              GlobalLockName = GrepGetGlobalLockName(34);
              EtwTraceGreLockReleaseSemaphore(GlobalLockName, v10);
              v12 = GreGetCurrentThreadCrossSessionCheck();
              if ( v12 )
              {
                v13 = (*(_QWORD *)v12 & 0xFFFFFFFBFFFFFFFFuLL) == 0;
                *(_QWORD *)v12 &= ~0x400000000uLL;
                if ( v13 )
                  GrepOnAllLocksReleased();
              }
              GreReleaseSemaphoreExclusiveInternal(v10);
            }
            v14 = v19;
            if ( v19 )
            {
              v15 = GrepGetGlobalLockName(33);
              EtwTraceGreLockReleaseSemaphore(v15, v14);
              v16 = GreGetCurrentThreadCrossSessionCheck();
              if ( v16 )
              {
                v13 = (*(_QWORD *)v16 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
                *(_QWORD *)v16 &= ~0x200000000uLL;
                if ( v13 )
                  GrepOnAllLocksReleased();
              }
              GreReleaseSemaphoreExclusiveInternal(v14);
            }
          }
        }
LABEL_24:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
      }
    }
  }
}
